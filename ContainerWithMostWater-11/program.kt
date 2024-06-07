class Solution {
    fun maxArea(height: IntArray): Int {
        
        //wrong answer
        
        // var max = 0
        // for(line in height){
        //     for(line in height){
        //         if( max < ( line * line )){
        //             max = line*line
        //         }
        //     }
        // }

        var max = 0
        var right = height.size -1
        var left = 0
        println(right)
        
        //algorithm 2

        // for((index, line) in height.withIndex()){
        //     //code to prune
        //     val temp = height
        //     temp.drop(index+1)
        //     temp=temp.asReversed()
        //     for((index2, line2) in height.withIndex()){
        //         var area = getArea(line, line2, index, index2)
        //         if( max < area){
        //             max = area
        //         }
        //     }
        // }

        //algorithm 3
        while(left != right){
            var width = right - left
            var heigh = if ( height[left] > height[right]) height[right] else height[left]
            var area = width*heigh
            if(max < area){
                max = area
            }
            if(height[left] < height[right]){
                left += 1
            }
            else{
                right -= 1
            }
        }

        return max
    }
    fun getArea(line:Int, line2:Int, index:Int, index2:Int):Int{
        val height=if(line>line2) line2 else line
        val width=abs((index+1)-(index2+1))
        return height*width
    }
}













        return max







    }
}