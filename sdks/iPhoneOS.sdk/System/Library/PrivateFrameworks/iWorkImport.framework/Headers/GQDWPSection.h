//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDWPSection : NSObject
{
    struct __CFArray mChildren;
    GQDSStyle *mStyle;
}

- (id)style;
- (struct __CFArray )children;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader )arg1 processor:(id)arg2;

@end

