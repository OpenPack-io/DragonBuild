//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebCoreAVCaptureDeviceManagerObserver : NSObject
{
    struct AVCaptureDeviceManager m_callback;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)deviceConnectedDidChange:(id)arg1;
- (void)disconnect;
- (id)initWithCallback:(struct AVCaptureDeviceManager )arg1;

@end

