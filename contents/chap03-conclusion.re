= おまけ : KawaiiCraneの思想
本書を執筆する大きなきっかけとなったのがKawaiiCraneの開発です。そしてその動機となったのがTwitterをやっていた時に感じた、手動のいいねに対する不満でした。

私は学生時代からコレクションが好きです。Twitterでもお気に入りのイラストをいいねしてコレクション替わりにしていました。ですがある日「毎日いいねをする作業をしているけど、どうにか自動化できないかな？」と考えたのです。

方法を考えてみると、まずいいね作業を手順として定性化します。1)タイムラインや検索などで画像を探す。2)見つけた画像に対して、いいねを押す価値があるかを判断する。3)価値があればいいねを押し、でなければいいねを押さない。4)最後に次の画像を探しに1)に戻る。

こういった手続きを自動化する時に一番難しそうなのが2)の判断をする部分です。判断というのは難しいものですが、人間はイラストの色々な要素を元に判断が出来ます。しかし自動化するにはコンピュータに判断を任せる必要があるので、どうにかします。

考えられる一つの手段が、画像認識による特徴の抽出でしょう。人間と同じようにコンピュータにも画像を見て貰って、なんらかの基準を元に判断して貰うという算段です。

そのなんらかの基準となるのが画像認識の手法なのですが、KawaiiCraneの開発においては深層学習(Deep Learning)を利用しました。

== おまけ : 機械学習モデルによるレコメンドアルゴリズム
本書の内容を活用して開発したKawaiiCraneですが、実はイラストを表示する順番を決めるのに、機械学習を使っています。正確に言うと、イラストから機械学習モデルでタグを抽出し、タグを特徴量と考えてレコメンドのコンテンツとしています。
その仕組を簡単に説明します。

タグの抽出に用いるのが機械学習モデルです。モデルにイラストを入力すると特徴を表すタグが出力されます。イラストなのでgirl（少女）、solo（1人の人物が描かれている）、long hair（髪が長い）などが考えられるでしょう。

イラストには好みがあって、好みの度合いをこういった特徴で表現できると仮定します。

ロングヘアーが好みのユーザにレコメンドする時は、long hairタグが含まれるイラストを優先的に出力すれば、簡単なレコメンドの完成です。

KawaiiCraneでは複数のタグに対して同じことを行なってレコメンドを実現しています。

(イラストレコメンドのイメージ図)




== レコメンド
消費者が商品を選択する時に、商品が多すぎると何を基準に選んで良いか分からなくなります。それを手助けするアルゴリズムがレコメンドです。


== 機械学習
機械学習の中でもニューラルネットワークという、人間の脳構造を模したアルゴリズムに基づいたモデルを利用しています。多次元入力多次元出力で、非線形な関数も近似できると考えられており、様々なタスクで高いパフォーマンスを出しています。

なぜ高いパフォーマンスが出ているのかは諸説あります。特に話題となったのは画像の種類を判断する画像認識や、Google翻訳など言語を取り扱う自然言語処理などといったタスクです。

それらのタスクを解決するパフォーマンスの高い手法ですが、そうなっている理由がはっきりしているわけではないのです。世界中で色々な企業や人たちがお金をかけて研究しているので、大きな方針が間違っているとは思いませんが、理論的な研究はまだまだ進んでいない印象です。