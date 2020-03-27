//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFDiffableItemGroup-Protocol.h>
#import <Home/NAIdentifiable-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSString;

@interface HFItemSection : NSObject <HFDiffableItemGroup, NSCopying, NSMutableCopying, NAIdentifiable>
{
    NSString *_identifier;
    NSString *_headerTitle;
    NSString *_footerTitle;
    NSAttributedString *_attributedFooterTitle;
    NSDictionary *_userInfo;
    NSArray *_items;
}

+ (id)filterSections:(id)arg1 toDisplayedItems:(id)arg2;
+ (id)na_identity;
+ (id /* CDUnknownBlockType */)itemResultManualSortComparator;
+ (id /* CDUnknownBlockType */)defaultItemComparator;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSAttributedString *attributedFooterTitle; // @synthesize attributedFooterTitle=_attributedFooterTitle;
@property(copy, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *diffableItems;
@property(readonly, copy, nonatomic) NSString *groupIdentifier;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_createCopyMutable:(BOOL)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

