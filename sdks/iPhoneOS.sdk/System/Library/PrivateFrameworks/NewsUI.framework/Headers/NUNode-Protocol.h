//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, UIView;
@protocol NUNode;

@protocol NUNode <NSObject>
@property(readonly, nonatomic) NSArray *subnodes;
@property(readonly, nonatomic) __weak id <NUNode> supernode;
@property(nonatomic) CGRect bounds;
@property(nonatomic) CGRect frame;
- (void)resolveViewsInView:(UIView *)arg1;
- (void)removeFromSupernode;
- (void)addSubnode:(id <NUNode>)arg1;
@end

