package system.assets;

#if MODS
import sys.io.File;
import sys.FileSystem;
import system.assets.ModSystem.ModMetaData;
#end
import openfl.media.Sound;
import openfl.display.BitmapData;
import openfl.utils.Assets;

class Paths {
    inline public static var soundExt:String = #if web "mp3" #else "ogg" #end;

    public static function image(key:String, ignoreMods:Bool = false, embed:Bool = false) {
        var image:BitmapData;
        if (ignoreMods)
            image = embed ? Assets.getBitmapData('embed/images/$key.png') : AssetPaths.image('images/$key.png');
        else {
            image = embed ? Assets.getBitmapData('embed/images/$key.png') : #if MODS ModPaths.image('images/$key.png') #else null #end;
            if (image == null && !embed) image = AssetPaths.image('images/$key.png');
        }
        return image;
    }

    public static function sound(key:String, ignoreMods:Bool = false, embed:Bool = false) {
        var sound:Sound;
        if (ignoreMods)
            sound = embed ? Assets.getSound('embed/sounds/$key.$soundExt') : AssetPaths.sound('sounds/$key.$soundExt');
        else {
            sound = embed ? Assets.getSound('embed/sounds/$key.$soundExt') : #if MODS ModPaths.sound('sounds/$key.$soundExt') #else null #end;
            if (sound == null && !embed) sound = AssetPaths.sound('sounds/$key.$soundExt');
        }
        return sound;
    }

    public static function text(key:String, ignoreMods:Bool = false, embed:Bool = false) {
        var text:String;
        if (ignoreMods)
            text = embed ? Assets.getText('embed/$key') : AssetPaths.text(key);
        else {
            text = embed ? Assets.getText('embed/$key') : #if MODS ModPaths.text(key) #else null #end;
            if (text == null && !embed) text = AssetPaths.text(key);
        }
        return text;
    }

    public static function song(key:String) {
        var song:Sound = #if MODS ModPaths.sound('songs/$key/$soundExt') #else null #end;
        if (song == null) song = AssetPaths.sound('songs/$key.$soundExt');

        return song;
    }

    public static function video(key:String, ignoreMods:Bool = false) {
        var video:String;
        if (ignoreMods)
            video = AssetPaths.file('videos/$key.mp4');
        else {
            video = #if MODS ModPaths.file('videos/$key.mp4') #else null #end;
            if (video == null) video = AssetPaths.file('videos/$key.mp4');
        }
        return video;
    }

    public static function fragShader(key:String, ignoreMods:Bool = false, embed:Bool = false) {
        var fragShader:String = text('shaders/$key.frag', ignoreMods, embed);
        return fragShader;
    }

    public static function vertShader(key:String, ignoreMods:Bool = false, embed:Bool = false) {
        var vertShader = text('shaders/$key.vert', ignoreMods, embed);
        return vertShader;
    }

    public static function music(key:String, ignoreMods:Bool = false, embed:Bool = false) {
        var music:Sound;
        if (ignoreMods)
            music = embed ? Assets.getSound('embed/music/$key.$soundExt') : AssetPaths.sound('music/$key.$soundExt');
        else {
            music = embed ? Assets.getSound('embed/music/$key.$soundExt') : #if MODS ModPaths.sound('music/$key.$soundExt') #else null #end;
            if (music == null && !embed) music = AssetPaths.sound('music/$key.$soundExt');
        }
        return music;
    }

    public static function font(key:String, ignoreMods:Bool = false, embed:Bool = false) {
        var font:String;
        if (ignoreMods)
            font = embed ? Assets.getPath('embed/fonts/$key') : AssetPaths.file('fonts/$key');
        else {
            font = embed ? Assets.getPath('embed/fonts/$key') : #if MODS ModPaths.file('fonts/$key') #else null #end;
            if (font == null && !embed) font = AssetPaths.file('fonts/$key');
        }
        return font;
    }

    public static function exists(key:String) {
        return AssetPaths.exists(key) #if MODS || ModPaths.exists(key) #end;
    }
}

class AssetPaths {
    public static function image(key:String) {
        return {
            if (exists(key))
                Assets.getBitmapData('assets/$key');
            else null;
        }
    }

    public static function sound(key:String) {
        return {
            if (exists(key))
                Assets.getSound('assets/$key');
            else null;
        }
    }

    public static function text(key:String) {
        return {
            if (exists(key))
                Assets.getText('assets/$key');
            else null;
        }
    }

    public static function file(key:String) {
        return {
            if (exists(key))
                Assets.getPath('assets/$key');
            else null;
        }
    }

    public static function exists(key:String) {
        return Assets.exists('assets/$key');
    }
}

#if MODS
class ModPaths {
    public static var mods:Map<String, ModMetaData> = [];
    public static var modsToCheck:Array<ModMetaData> = [];

    public static function image(key:String) {
        var bitmapData:BitmapData = null;
        for (mod in mods.keys()) {
            if (FileSystem.exists('${mods[mod].path}/$key'))
                bitmapData = BitmapData.fromFile('${mods[mod].path}/$key');
        }
        return bitmapData;
    }

    public static function sound(key:String) {
        var sound:Sound = null;
        for (mod in mods.keys()) {
            if (FileSystem.exists('${mods[mod].path}/$key'))
                sound = Sound.fromFile('${mods[mod].path}/$key');
        }
        return sound;
    }

    public static function text(key:String) {
        var text:String = null;
        for (mod in mods.keys()) {
            if (FileSystem.exists('${mods[mod].path}/$key'))
                text = File.getContent('${mods[mod].path}/$key');
        }
        return text;
    }

    public static function file(key:String) {
        var file:String = null;
        for (mod in mods.keys()) {
            if (FileSystem.exists('${mods[mod].path}/$key'))
                file = '${mods[mod].path}/$key';
        }
        return file;
    }

    public static function exists(key:String) {
        var exists:Bool = false;
        for (mod in mods.keys()) {
            if (FileSystem.exists('${mods[mod].path}/$key'))
                exists = true;
        }
        return exists;
    }
}
#end