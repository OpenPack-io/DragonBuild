//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIStatusBar;

@interface SBStatusBarContainer : NSObject
{
    UIStatusBar *_statusBar;
    NSString *_reason;
}

@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) __weak UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
// - (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end

