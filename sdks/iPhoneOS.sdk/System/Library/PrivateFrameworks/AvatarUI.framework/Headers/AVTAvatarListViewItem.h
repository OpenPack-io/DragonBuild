//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarListItem-Protocol.h>

@class UIView;

@interface AVTAvatarListViewItem : NSObject <AVTAvatarListItem>
{
    UIView *_view;
}

@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)downcastWithRecordHandler:(id /* CDUnknownBlockType */)arg1 imageHandler:(id /* CDUnknownBlockType */)arg2 viewHandler:(id /* CDUnknownBlockType */)arg3;
- (void)downcastWithRecordHandler:(id /* CDUnknownBlockType */)arg1 viewHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithView:(id)arg1;

@end

