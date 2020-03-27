//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTypingChatItem.h>

@class NSData, NSString;

@interface CKTypingPluginChatItem : CKTypingChatItem
{
    NSString *_plugInBundleID;
    NSData *_typingIndicatorData;
}

@property(readonly, nonatomic) NSData *typingIndicatorData; // @synthesize typingIndicatorData=_typingIndicatorData;
@property(copy, nonatomic) NSString *plugInBundleID; // @synthesize plugInBundleID=_plugInBundleID;
// - (void).cxx_destruct;
- (id)indicatorLayer;
- (id)iconImage;
- (CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets )arg2;
- (Class)cellClass;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;

@end

