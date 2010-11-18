/*
 DCTQueue.h
 DCTFoundation
 
 Created by Daniel Tull on 05.04.2009.

 
 
 Copyright (c) 2009 Daniel Tull. All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 
 * Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.
 
 * Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.
 
 * Neither the name of the author nor the names of its contributors may be used
 to endorse or promote products derived from this software without specific
 prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import <Foundation/Foundation.h>


@interface DCTQueue : NSObject {
	NSMutableArray *queue;
}


/** @name Standard queue operations
 @{
 */

/** @brief The number of items in the queue.
 
 @return The number of items in the queue.
 */
- (NSUInteger)count;

/** @brief Add an object to the end of the queue.
 
 @param object The object to add.
 */
- (void)enqueue:(id)object;
- (void)push:(id)object;

/** @brief Remove the object at the front of the queue and return it.
 
 @return The object at the front of the queue.
 */
- (id)dequeue;
- (id)pop;

/** @brief Return the object at the front of the queue without removing it from the queue.
 
 @return The object at the front of the queue.
 */
- (id)front;

/**
 @}
 */


@end