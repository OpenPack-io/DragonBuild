//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSInputStream;
@protocol OS_dispatch_queue;

@interface MSVStreamReader : NSObject <NSStreamDelegate>
{
    BOOL _closeOnStop;
    BOOL _stopped;
    struct z_stream_s _zstreamp;
    BOOL _compress;
    id /* CDUnknownBlockType */ _didReadDataBlock;
    id /* CDUnknownBlockType */ _didFinishReadingBlock;
    id /* CDUnknownBlockType */ _didEncounterErrorBlock;
    NSUInteger _maximumBufferSize;
    double _timestamp;
    NSInputStream *_stream;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSInputStream *stream; // @synthesize stream=_stream;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic, getter=shouldCompress) BOOL compress; // @synthesize compress=_compress;
@property(nonatomic) NSUInteger maximumBufferSize; // @synthesize maximumBufferSize=_maximumBufferSize;
@property(copy, nonatomic) id /* CDUnknownBlockType */ didEncounterErrorBlock; // @synthesize didEncounterErrorBlock=_didEncounterErrorBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ didFinishReadingBlock; // @synthesize didFinishReadingBlock=_didFinishReadingBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ didReadDataBlock; // @synthesize didReadDataBlock=_didReadDataBlock;
// - (void).cxx_destruct;
- (void)_stop;
- (BOOL)_shouldHandleEvent;
- (id)_compressedDataForData:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(NSUInteger)arg2;
- (void)readAllDataIntoFileHandle:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)readAllDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)readAllDataWithError:(id )arg1;
- (void)stopWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)stop;
- (void)dealloc;
- (void)start;
- (id)initWithInputStream:(id)arg1 queue:(id)arg2;

@end

