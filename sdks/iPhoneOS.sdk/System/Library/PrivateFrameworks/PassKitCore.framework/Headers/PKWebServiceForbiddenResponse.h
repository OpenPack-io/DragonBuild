//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKWebServiceResponse.h>

@class NSNumber, NSString;

@interface PKWebServiceForbiddenResponse : PKWebServiceResponse
{
    NSNumber *_errorCode;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
}

@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
// - (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

