//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGTitleSpecDelegate-Protocol.h>

@class NSSet, PGTitle, PGTitleSpecCollection;
@protocol PGSpecBasedTitleGeneratorDelegate;

@interface PGSpecBasedTitleGenerator : NSObject <PGTitleSpecDelegate>
{
    NSSet *_moments;
    NSSet *_features;
    PGTitleSpecCollection *_specCollection;
    PGTitle *_title;
    id <PGSpecBasedTitleGeneratorDelegate> _delegate;
    NSUInteger _lineBreakBehavior;
}

@property(nonatomic) NSUInteger lineBreakBehavior; // @synthesize lineBreakBehavior=_lineBreakBehavior;
@property __weak id <PGSpecBasedTitleGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PGTitleSpecCollection *specCollection; // @synthesize specCollection=_specCollection;
@property(retain, nonatomic) NSSet *features; // @synthesize features=_features;
@property(retain, nonatomic) NSSet *moments; // @synthesize moments=_moments;
// - (void).cxx_destruct;
- (id)titleSpec:(id)arg1 inputForArgument:(id)arg2;
- (id)_titleFromSpecs:(id)arg1;
- (id)_title;
@property(readonly, nonatomic) PGTitle *title; // @synthesize title=_title;
- (id)initWithMoments:(id)arg1 features:(id)arg2 specCollection:(id)arg3;
- (id)initWithMoments:(id)arg1 features:(id)arg2 meaningLabel:(id)arg3 isAggregation:(BOOL)arg4;
- (id)initWithMoments:(id)arg1 meaningLabel:(id)arg2;
- (id)initWithMoments:(id)arg1 memoryCategory:(NSUInteger)arg2 subcategory:(NSUInteger)arg3;

@end

