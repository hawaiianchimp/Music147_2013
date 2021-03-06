//
//  MUS147AQPlayer.h
//  Music147_2013
//
//  Created by Kojiro Umezaki on 4/4/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <AudioToolbox/AudioToolbox.h>
#import <Foundation/Foundation.h>

/* number of buffers used by system */
#define kNumberBuffers	3

/* sample rate */
#define kSR				22050.

@interface MUS147AQPlayer : NSObject {

	AudioQueueRef				queue;
	AudioQueueBufferRef			buffers[kNumberBuffers];
	AudioStreamBasicDescription	dataFormat;
    
    /* the follow member variable will soon be obsolete */
    Float64 normPhase;
    
    Float64 freq;
    Float64 amp;
}

@property (readwrite) Float64 freq;
@property (readwrite) Float64 amp;

-(void)setup;

-(OSStatus)start;
-(OSStatus)stop;

-(void)fillAudioBuffer:(Float64*)buffer:(UInt32)num_samples;

@end
