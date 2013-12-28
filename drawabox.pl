#!/usr/bin/perl -w

$sizes = $#ARGV + 1;
$in_width = $ARGV[0];
$in_height = $ARGV[1];


    if ($sizes > 2) {
        printf("Too many arguments supplied, I only need two.\n");
        exit;
    }
    elsif( $sizes < 2 ) {
        printf("Not enough arguments supplied.  I need more then one.\n");
        exit;
    }
    else {
        printf("The demensions are $in_height, and $in_width.\n");
    }

for (my $width = 0; $width <= ($in_width - 1); $width++) {
        print("*");
    }
    print("\n");

for (my $height = 0; $height <= ($in_height - 3) ; $height++) {
    printf("|");

for (my $width = 0 ; $width <= ($in_width - 3) ; $width++) {
   printf(" ");
   }
printf("|\n");
    }

for (my $width = 0 ; $width <= ($in_width - 1) ; $width++) {
    printf("*");
    }

printf("\n");
exit;
