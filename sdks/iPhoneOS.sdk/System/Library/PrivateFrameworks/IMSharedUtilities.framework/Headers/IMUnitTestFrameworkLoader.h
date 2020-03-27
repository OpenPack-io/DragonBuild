//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMUnitTestBundleLoader, IMUnitTestLogger;

@interface IMUnitTestFrameworkLoader : NSObject
{
    BOOL _xctestFrameworkLoaded;
    IMUnitTestBundleLoader *_bundleLoader;
    IMUnitTestLogger *_logger;
}

@property(readonly) IMUnitTestLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) IMUnitTestBundleLoader *bundleLoader; // @synthesize bundleLoader=_bundleLoader;
@property BOOL xctestFrameworkLoaded; // @synthesize xctestFrameworkLoaded=_xctestFrameworkLoaded;
// - (void).cxx_destruct;
- (BOOL)loadTestFrameworks:(id )arg1;
- (BOOL)loadXCTestFramework:(id )arg1;
- (BOOL)loadXCTestFrameworkFromSDK:(id )arg1;
- (BOOL)loadFrameworks:(id)arg1 outError:(id )arg2;
- (BOOL)findFrameworkPathsWithFrameworkNames:(id)arg1 searchPaths:(id)arg2 outFrameworkPaths:(id )arg3 error:(id )arg4;
- (id)frameworkSearchPaths;
- (BOOL)frameworkExistsAtPath:(id)arg1;
- (BOOL)readXCTestFrameworkDependencies:(id )arg1 error:(id )arg2;
- (BOOL)loadFrameworkNamesFromTextFile:(id)arg1 outNames:(id )arg2 error:(id )arg3;
- (id)initWithLogger:(id)arg1 bundleLoader:(id)arg2;

@end

