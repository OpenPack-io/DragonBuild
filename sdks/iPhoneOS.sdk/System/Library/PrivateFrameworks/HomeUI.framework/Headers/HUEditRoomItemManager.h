//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFRoomBuilder, HFStaticItem, HFZoneModule;

@interface HUEditRoomItemManager : HFItemManager
{
    HFStaticItem *_nameItem;
    HFStaticItem *_cameraItem;
    HFStaticItem *_chooseWallpaperItem;
    HFStaticItem *_wallpaperThumbnailItem;
    HFStaticItem *_wallpaperPickerItem;
    HFStaticItem *_removeItem;
    HFZoneModule *_zoneModule;
    HFRoomBuilder *_roomBuilder;
}

@property(retain, nonatomic) HFRoomBuilder *roomBuilder; // @synthesize roomBuilder=_roomBuilder;
@property(retain, nonatomic) HFZoneModule *zoneModule; // @synthesize zoneModule=_zoneModule;
@property(retain, nonatomic) HFStaticItem *removeItem; // @synthesize removeItem=_removeItem;
@property(retain, nonatomic) HFStaticItem *wallpaperPickerItem; // @synthesize wallpaperPickerItem=_wallpaperPickerItem;
@property(retain, nonatomic) HFStaticItem *wallpaperThumbnailItem; // @synthesize wallpaperThumbnailItem=_wallpaperThumbnailItem;
@property(retain, nonatomic) HFStaticItem *chooseWallpaperItem; // @synthesize chooseWallpaperItem=_chooseWallpaperItem;
@property(retain, nonatomic) HFStaticItem *cameraItem; // @synthesize cameraItem=_cameraItem;
@property(retain, nonatomic) HFStaticItem *nameItem; // @synthesize nameItem=_nameItem;
// - (void).cxx_destruct;
- (BOOL)_canDeleteRoom;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithRoomBuilder:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end

