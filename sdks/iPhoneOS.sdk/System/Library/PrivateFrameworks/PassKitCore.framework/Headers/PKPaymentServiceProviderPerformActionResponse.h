//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionResponse : PKPaymentWebServiceResponse
{
    PKServiceProviderPurchase *_updatedPurchase;
}

@property(readonly, retain, nonatomic) PKServiceProviderPurchase *updatedPurchase; // @synthesize updatedPurchase=_updatedPurchase;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

