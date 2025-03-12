/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouaalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:13:57 by aouaalla          #+#    #+#             */
/*   Updated: 2025/02/27 15:13:57 by aouaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	parser(argc, argv, &stack_a);
	push_swap(&stack_a, &stack_b);
	ft_lstclear(&stack_b, del);
	return (0);
}

/* testing */

// int	main(int argc, char **argv)
// {
// 	t_list	*stack_a;
// 	t_list	*stack_b;

// 	stack_b = NULL;
// 	stack_a = NULL;
// 	parser(argc, argv, &stack_a);

// 	pb(&stack_b, &stack_a);
// 	pa(&stack_a, &stack_b);

// 	ft_lstclear(&stack_a, del);
// 	ft_lstclear(&stack_b, del);
// 	return (0);
// }

// 100 number: 100 98 96 94 92 90 88 86 84 82 80 78 76 74 72 70 68 66 64 62 60 58 56 54 52 50 48 46 44 42 40 38 36 34 32 30 28 26 24 22 20 18 16 14 12 10 8 6 4 2 0 99 97 95 93 91 89 87 85 83 81 79 77 75 73 71 69 67 65 63 61 59 57 55 53 51 49 47 45 43 41 39 37 35 33 31 29 27 25 23 21 19 17 15 13 11 9 7 5 3 1

// 500 number: 500 498 496 494 492 490 488 486 484 482 480 478 476 474 472 470 468 466 464 462 460 458 456 454 452 450 448 446 444 442 440 438 436 434 432 430 428 426 424 422 420 418 416 414 412 410 408 406 404 402 400 398 396 394 392 390 388 386 384 382 380 378 376 374 372 370 368 366 364 362 360 358 356 354 352 350 348 346 344 342 340 338 336 334 332 330 328 326 324 322 320 318 316 314 312 310 308 306 304 302 300 298 296 294 292 290 288 286 284 282 280 278 276 274 272 270 268 266 264 262 260 258 256 254 252 250 248 246 244 242 240 238 236 234 232 230 228 226 224 222 220 218 216 214 212 210 208 206 204 202 200 198 196 194 192 190 188 186 184 182 180 178 176 174 172 170 168 166 164 162 160 158 156 154 152 150 148 146 144 142 140 138 136 134 132 130 128 126 124 122 120 118 116 114 112 110 108 106 104 102 100 98 96 94 92 90 88 86 84 82 80 78 76 74 72 70 68 66 64 62 60 58 56 54 52 50 48 46 44 42 40 38 36 34 32 30 28 26 24 22 20 18 16 14 12 10 8 6 4 2 0 499 497 495 493 491 489 487 485 483 481 479 477 475 473 471 469 467 465 463 461 459 457 455 453 451 449 447 445 443 441 439 437 435 433 431 429 427 425 423 421 419 417 415 413 411 409 407 405 403 401 399 397 395 393 391 389 387 385 383 381 379 377 375 373 371 369 367 365 363 361 359 357 355 353 351 349 347 345 343 341 339 337 335 333 331 329 327 325 323 321 319 317 315 313 311 309 307 305 303 301 299 297 295 293 291 289 287 285 283 281 279 277 275 273 271 269 267 265 263 261 259 257 255 253 251 249 247 245 243 241 239 237 235 233 231 229 227 225 223 221 219 217 215 213 211 209 207 205 203 201 199 197 195 193 191 189 187 185 183 181 179 177 175 173 171 169 167 165 163 161 159 157 155 153 151 149 147 145 143 141 139 137 135 133 131 129 127 125 123 121 119 117 115 113 111 109 107 105 103 101 99 97 95 93 91 89 87 85 83 81 79 77 75 73 71 69 67 65 63 61 59 57 55 53 51 49 47 45 43 41 39 37 35 33 31 29 27 25 23 21 19 17 15 13 11 9 7 5 3 1

/*
		TODO !!!!!

		only check half the stack
		before starting to sort, check the if the stack is decending or ascending, only 1 time
		now you will use this when you don't find a number in the range
		if the stack is decending, reverse rotate, else, rotate the stack
*/