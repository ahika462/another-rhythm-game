package;

import hxAddons.HxBitmapSprite;

class Note extends HxBitmapSprite
{
    public var time:Float;
    public var id:Int;

    public var spawned:Bool = false;
    public var strumTime:Float = 0;

    public var skin:String = 'square';

    public function new(time:Float, id:Int)
    {
        super();
        this.time = time;
        this.id = id;
        loadBitmap(Paths.image('indicators/$skin'));
    }

    override function update(elapsed:Float)
    {
        var button = PlayState.instance.butts.members[id];

        x = button.x + button.width / 2 - width / 2;
        y = button.y + button.height / 2 - height / 2;
        updateHitbox();

        super.update(elapsed);
    }
}