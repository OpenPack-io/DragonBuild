//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUILabelStackTemplateView.h>

#import <SiriUI/SiriUITemplateView-Protocol.h>

@class UIImageView;

@interface SiriUIProfileTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView>
{
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
// - (void).cxx_destruct;
- (long long)layoutStyle;
- (void)reloadData;
- (void)layoutImage;
- (id)initWithDataSource:(id)arg1;

@end

