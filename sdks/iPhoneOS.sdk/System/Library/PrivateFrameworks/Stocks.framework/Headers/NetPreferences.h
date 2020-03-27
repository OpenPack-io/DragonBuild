//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NetPreferences : NSObject
{
    NSString *_buildVersion;
    NSString *_productVersion;
    BOOL _serviceDebugging;
    BOOL _isNetworkReachable;
    NSString *_requestCountryCode;
    NSString *_requestLanguageCode;
    NSString *_acceptLanguageCode;
    NSString *_UUID;
}

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
// - (void).cxx_destruct;
- (id)signedRequestForURL:(id)arg1 parameters:(id)arg2;
- (id)stocksYQLBaseURL;
- (id)serviceDebuggingPath;
- (BOOL)serviceDebugging;
- (id)logoBacksideImage;
- (id)logoButtonImage;
- (id)_cacheDirectoryPath;
- (id)backsideLogoURL;
- (id)defaultBacksideLogoURL;
- (id)fullQuoteURLOverrideForStock:(id)arg1;
- (id)_urlStringWithHost:(id)arg1;
- (id)financeRequestAttributes;
- (void)addStocksHeadersToPostRequest:(id)arg1;
- (id)_stocksAcceptLanguage;
- (id)stocksLanguageCodeForLanguage:(id)arg1;
- (id)stocksLanguageCode;
- (id)stocksCountryCode;
- (id)_stocksUserAgent;
@property(nonatomic, getter=isNetworkReachable) BOOL networkReachable;
- (void)resetLocale;
@property(retain) NSString *acceptLanguageCode;
@property(retain) NSString *requestLanguageCode;
@property(retain) NSString *requestCountryCode;
- (id)init;

@end

