//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPTransformOperation.h>

@interface FPTrashOperation : FPTransformOperation
{
}

- (id)fp_prettyDescription;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)finalItemsForStitcherForResult:(id)arg1;
- (void)presendNotifications;
- (NSUInteger)transformItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)subclassPreflightWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithItems:(id)arg1;
- (id)replicateForItems:(id)arg1;

@end

