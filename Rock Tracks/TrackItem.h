//
//  TrackItem.h
//  Rock Tracks
//
//  Created by Ryan McNulty on 26/07/2017.
//  Copyright © 2017 Ryan McNulty. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Logical model representation to capture the
 * concept of a 'track'
 */
@interface TrackItem : NSObject

@property NSString * trackName;
@property NSString * artist;
@property double price;
@property NSURL * artworkUrl;
@property NSInteger duration;
@property NSDate * releaseDate;
@property NSURL * trackViewUrl;
@property NSString * currencyIdentifier;

@end
