//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDPreviewAction.h>

#import <DataDetectorsUI/DDParsecCollectionDelegate-Protocol.h>

@class DDParsecCollectionViewController;

__attribute__((visibility("hidden")))
@interface DDParsecAction : DDPreviewAction <DDParsecCollectionDelegate>
{
    DDParsecCollectionViewController *_parsecViewController;
    BOOL _previewMode;
}

// - (void).cxx_destruct;
- (void)dismissParsecCollection:(id)arg1;
- (id)createViewController;
- (int)interactionType;
- (id)localizedName;

@end

