//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyCircleUI/FACircleRemoteUIDelegateDelegate-Protocol.h>

@class FACircleRemoteUIDelegate, RUIStyle, RemoteUIController, UIViewController;

@interface FACirclePresenter : NSObject <FACircleRemoteUIDelegateDelegate>
{
    RemoteUIController *_remoteUIController;
    FACircleRemoteUIDelegate *_remoteUIDelegate;
    id /* CDUnknownBlockType */ _completion;
    UIViewController *_presenter;
    RUIStyle *_customRUIStyle;
}

@property(retain, nonatomic) RUIStyle *customRUIStyle; // @synthesize customRUIStyle=_customRUIStyle;
@property(retain, nonatomic) UIViewController *presenter; // @synthesize presenter=_presenter;
// - (void).cxx_destruct;
- (void)FACircleRemoteUIDelegate:(id)arg1 completedWithSuccess:(BOOL)arg2 error:(id)arg3;
- (void)loadRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_serverHookHandlerWithRemoteUIController:(id)arg1;
- (id)initWithPresenter:(id)arg1 context:(id)arg2;
- (id)init;

@end

