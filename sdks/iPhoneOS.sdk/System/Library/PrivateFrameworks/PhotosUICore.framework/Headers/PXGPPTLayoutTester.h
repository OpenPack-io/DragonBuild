//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGGeneratedLayoutDelegate-Protocol.h>

@class NSArray;

@interface PXGPPTLayoutTester : NSObject <PXGGeneratedLayoutDelegate>
{
    NSArray *_inputItems;
}

+ (id)mockPaddingValues;
@property(retain, nonatomic) NSArray *inputItems; // @synthesize inputItems=_inputItems;
// - (void).cxx_destruct;
- (void)_iterateEditorialConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)_iterateGridConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (CGRect)generatedLayout:(id)arg1 bestCropRectForInputItemAtIndex:(unsigned int)arg2 withAspectRatio:(double)arg3;
- (id)generatedLayout:(id)arg1 inputItemAtIndex:(unsigned int)arg2;
- (id)generatedLayout:(id)arg1 objectReferenceAtIndex:(unsigned int)arg2;
- (void)runEditorialLayoutTestWithOptions:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)runGridLayoutTestWithOptions:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;

@end

