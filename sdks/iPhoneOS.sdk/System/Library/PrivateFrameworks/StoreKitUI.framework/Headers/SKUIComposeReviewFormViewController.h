//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

#import <StoreKitUI/SKUIComposeReviewViewDelegate-Protocol.h>

@class SKUIComposeReviewView, SKUIReviewMetadata;
@protocol SKUIComposeReviewFormDelegate;

__attribute__((visibility("hidden")))
@interface SKUIComposeReviewFormViewController : SUViewController <SKUIComposeReviewViewDelegate>
{
    SKUIComposeReviewView *_composeView;
    id <SKUIComposeReviewFormDelegate> _delegate;
    SKUIReviewMetadata *_review;
}

@property(nonatomic) __weak id <SKUIComposeReviewFormDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_submit;
- (void)_cancel;
- (void)composeReviewViewValidityChanged:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)setRating:(float)arg1;
@property(readonly, copy, nonatomic) SKUIReviewMetadata *editedReviewMetadata;
- (void)dealloc;
- (id)initWithReviewMetadata:(id)arg1;

@end

