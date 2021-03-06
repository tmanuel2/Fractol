/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 21:10:28 by tmanuel           #+#    #+#             */
/*   Updated: 2018/04/26 19:18:57 by tmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx.h"
# include "libft.h"
# include "get_next_line.h"

# define SCY 600
# define SCX 1000

typedef struct	s_libx
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;
	void	*image;
	char	*pix;
	int		bbp;
	int		s_l;
	int		endian;
	int		frct;
	double	zoom;
	double	ar1;
	double	ar2;
	double	rar1;
	double	rar2;
	int		im;
	double	x1;
	double	y1;
	double	zoomm;
	int		imax;
	double	cr;
	double	ci;
	double	zr;
	double	zi;
	double	ce;
	double	cd;
	int		i;
	int		djoo;
	int		color[5];
	int		colorb;
	int		psy;
}				t_libx;

void			ft_music(void);
void			ft_test(t_libx *f);
int				ft_keypress(int key, t_libx *f);
void			ft_color(t_libx *f);
void			ft_color1(t_libx *f);
void			ft_color2(t_libx *f);
void			ft_color3(t_libx *f);
void			ft_color4(t_libx *f);
int				ft_loop_hook(t_libx *f);
void			ft_autre(t_libx *f);
void			ft_julia(t_libx *f);
int				ft_hook(int x, int y, t_libx *f);
void			ft_mandel(t_libx *f);
int				ft_mouse_hook(int key, int x, int y, t_libx *f);
void			ft_exit(char *s);
int				ft_key_hook(int key, t_libx *f);
void			ft_putpixel(t_libx *env, int x, int y, int color);
void			ft_print(t_libx *f);

#endif
