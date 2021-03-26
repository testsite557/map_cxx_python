#!/usr/bin/python3


import map
import collections
from time import time


def main():
    now = time()
    unsorted_dic = map.generateMap()
    print(unsorted_dic)
    print(time() - now)
    now = time()
    unsorted_dic = dict(unsorted_dic)
    print(time() - now)
    now = time()
    sorted_dic = collections.OrderedDict(sorted(unsorted_dic.items()))
    print(time() - now)


if __name__ == '__main__':
    main()
