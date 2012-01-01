//
//  Tilemap_test.h
//  THE_KEY
//
//  Created by Nathan Jones on 12/23/11.
//  Copyright (c) 2011 Student. All rights reserved.
//

#import "CCLayer.h"
#import "cocos2d.h"
#import "Box2D.h"
#import "CommonProtocols.h"
#import "Constants.h"
#import "AFC.h"
#import "IID_Game_Character.h"
#import "GameManager.h"
#import "SneakyJoystick.h"
#import "SneakyJoystickSkinnedBase.h"
#import "SneakyButton.h"
#import "SneakyButtonSkinnedBase.h"
#import "GLES-Render.h"
#import "bullet.h"
@interface Gameplay_Layer : CCLayer <GameplayLayerDelegate>
{
    CCSpriteBatchNode *sceneSpriteBatchNode;
    b2World *world;
    GLESDebugDraw *debugDraw;
    BOOL Player_Exists;
    CCNode *tile_map_scroll_node;
    int map_size_x;
    int map_size_y;
    int tile_size;
    CCTMXTiledMap *map;
    CCTMXLayer *tiles;
    b2ContactListener *collision_listener;
    
}
-(void) connectControlsWithRightJoystick:(SneakyJoystick*) rightJoystick 
                         andLeftJoystick:(SneakyJoystick*)leftJoystick
                          andProneButton:(SneakyButton*)proneButton
                         andCrouchButton:(SneakyButton*)crouchButton;
-(void) initializeTileMap:(NSString *) tmxFile;
- (NSArray *)walkableAdjacentTilesCoordForTileCoord:(CGPoint)tileCoord;
@end
