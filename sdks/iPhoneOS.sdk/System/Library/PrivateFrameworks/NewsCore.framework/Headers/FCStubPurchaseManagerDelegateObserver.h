//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPurchaseManagerDelegate-Protocol.h>

@interface FCStubPurchaseManagerDelegateObserver : NSObject <FCPurchaseManagerDelegate>
{
    id /* CDUnknownBlockType */ _successBlock;
    id /* CDUnknownBlockType */ _failedBlock;
    id /* CDUnknownBlockType */ _failedWithInvalidReceiptBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ failedWithInvalidReceiptBlock; // @synthesize failedWithInvalidReceiptBlock=_failedWithInvalidReceiptBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ successBlock; // @synthesize successBlock=_successBlock;
// - (void).cxx_destruct;
- (void)purchaseSuccessWithProductID:(id)arg1 purchaseReceipt:(id)arg2 chargeCurrencyCode:(id)arg3 ongoingPurchaseEntry:(id)arg4;
- (void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(id)arg1 ongoingPurchaseEntry:(id)arg2;
- (void)purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4;
- (void)addPurchaseFailedWithInvalidReceiptBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addPurchaseFailedBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addPurchaseSuccessBlock:(id /* CDUnknownBlockType */)arg1;

@end

