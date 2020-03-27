//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGadget-Protocol.h>
#import <PhotosUICore/PXSampleGadgetViewDelegate-Protocol.h>

@class NSString, PXGadgetSpec, UIColor;
@protocol PXGadgetDelegate;

@interface PXSampleGadget : NSObject <PXSampleGadgetViewDelegate, PXGadget>
{
    BOOL _hasContentToDisplay;
    BOOL _expanded;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    NSUInteger _accessoryButtonType;
    PXGadgetSpec *_gadgetSpec;
    NSString *_gadgetTitle;
    NSUInteger _preferredHeight;
    NSUInteger _preferredExpandedHeight;
    UIColor *_backgroundColor;
}

@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) NSUInteger preferredExpandedHeight; // @synthesize preferredExpandedHeight=_preferredExpandedHeight;
@property(nonatomic) NSUInteger preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(copy, nonatomic) NSString *gadgetTitle; // @synthesize gadgetTitle=_gadgetTitle;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(nonatomic) NSUInteger accessoryButtonType; // @synthesize accessoryButtonType=_accessoryButtonType;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
// - (void).cxx_destruct;
- (void)userDidSelectAccessoryButton:(NSObject )arg1;
- (void)_prepareView:(id)arg1;
- (void)prepareCollectionViewItem:(UICollectionViewCell )arg1;
@property(readonly, nonatomic) Class collectionViewItemClass;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(readonly, nonatomic) BOOL hasContentToDisplay; // @synthesize hasContentToDisplay=_hasContentToDisplay;
@property(readonly, nonatomic) NSUInteger gadgetType;
@property(readonly, nonatomic) NSString *localizedTitle;
- (CGRect)view:(id)arg1 colorFrameForBounds:(CGRect)arg2;
- (id)initWithMininumHeight:(double)arg1;
- (id)init;

@end

