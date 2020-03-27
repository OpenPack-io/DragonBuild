//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUIKit/CCUICAPackageView.h>

__attribute__((visibility("hidden")))
@interface MediaControlsRoutingCornerView : CCUICAPackageView
{
    BOOL _routesAvailable;
    BOOL _routing;
    long long _deviceType;
}

@property(nonatomic, getter=isRouting) BOOL routing; // @synthesize routing=_routing;
@property(nonatomic, getter=routesAreAvailable) BOOL routesAvailable; // @synthesize routesAvailable=_routesAvailable;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
- (void)_updateGlyph;
- (id)initWithFrame:(CGRect)arg1;

@end

