//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSEnumerator, NSString;
@protocol TSKModel, TSKModelVisitor;

@protocol TSKModel <NSObject>

@optional
- (void)acceptVisitor:(id <TSKModelVisitor>)arg1;
- (NSString *)modelPathComponentForChild:(id <TSKModel>)arg1;
- (NSEnumerator *)childEnumerator;
@end

