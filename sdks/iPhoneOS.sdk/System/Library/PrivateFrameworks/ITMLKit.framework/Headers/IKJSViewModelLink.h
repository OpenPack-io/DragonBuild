//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSEventListenerObject.h>

#import <ITMLKit/IKJSViewModelLink-Protocol.h>
#import <ITMLKit/_IKJSViewModelLink-Protocol.h>
#import <ITMLKit/_IKJSViewModelLinkProxy-Protocol.h>

@class IKDOMDocument, NSDictionary;
@protocol IKJSViewModelLinkDelegate;

@interface IKJSViewModelLink : IKJSEventListenerObject <IKJSViewModelLink, _IKJSViewModelLinkProxy, _IKJSViewModelLink>
{
    BOOL _isClosed;
    struct {
        BOOL hasDocumentDidChange;
        BOOL hasResponseDictionaryDidChange;
    } _delegateFlags;
    IKDOMDocument *_document;
    NSDictionary *_responseDictionary;
    id <IKJSViewModelLinkDelegate> _delegate;
}

@property(nonatomic) __weak id <IKJSViewModelLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(retain, nonatomic) IKDOMDocument *document; // @synthesize document=_document;
// - (void).cxx_destruct;
- (void)_unhandled;
- (void)close:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)asPrivateIKJSViewModelLink;

@end

