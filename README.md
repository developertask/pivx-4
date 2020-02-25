OHONETWORK Core integration/staging repository
=====================================

[![Build Status](https://travis-ci.org/OHONETWORK-Project/OHONETWORK.svg?branch=master)](https://travis-ci.org/OHONETWORK-Project/OHONETWORK) [![GitHub version](https://badge.fury.io/gh/OHONETWORK-Project%2FOHONETWORK.svg)](https://badge.fury.io/gh/OHONETWORK-Project%2FOHONETWORK)

OHONETWORK is an open source crypto-currency focused on fast private transactions using the Zerocoin protocol, with low transaction fees & environmental footprint.  It utilizes the first ever anonymous proof of stake protocol, called zPoS, combined with regular PoS and masternodes for securing its network. zPoS incentivises using the privacy features available in OHONETWORK by granting a higher block reward for zPoS over regular PoS and masternodes. In practice OHONETWORK has between 4 to 10 times higher use of it's privacy features in comparison to other coins that combine public and private transactions. This is thanks to innovations like zPoS and integrating the Zerocoin protocol into light/mobile wallets, allowing for a complete and lightweight privacy protocol that can be used on the go. As well as security improvements like [deterministic generation of zOHO for easy backups.](https://www.reddit.com/r/ohonetwork/comments/8gbjf7/how_to_use_deterministic_zerocoin_generation/)
The goal of OHONETWORK is to achieve a decentralized sustainable crypto currency with near instant full-time private transactions, fair governance and community intelligence.
- Anonymized transactions & consensus using the [_Zerocoin Protocol_](http://www.ohonetwork.org/zoho) and [zPoS](https://ohonetwork.org/zpos/).
- light/mobile wallet privacy using the [Zerocoin Light Node Protocol](https://ohonetwork.org/wp-content/uploads/2018/11/Zerocoin_Light_Node_Protocol.pdf)
- Fast transactions featuring guaranteed zero confirmation transactions, we call it _SwiftX_.
- Decentralized blockchain voting utilizing Masternode technology to form a DAO. The blockchain will distribute monthly treasury funds based on successful proposals submitted by the community and voted on by the DAO.

More information at [ohonetwork.org](http://www.ohonetwork.org) Visit our ANN thread at [BitcoinTalk](http://www.bitcointalk.org/index.php?topic=1262920)

### Coin Specs
<table>
<tr><td>Algo</td><td>Quark</td></tr>
<tr><td>Block Time</td><td>60 Seconds</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
<tr><td>Max Coin Supply (PoW Phase)</td><td>43,199,500 OHO</td></tr>
<tr><td>Max Coin Supply (PoS Phase)</td><td>Infinite</td></tr>
<tr><td>Premine</td><td>60,000 OHO*</td></tr>
</table>

*60,000 OHO Premine was burned in block [279917](http://www.presstab.pw/phpexplorer/OHONETWORK/block.php?blockhash=206d9cfe859798a0b0898ab00d7300be94de0f5469bb446cecb41c3e173a57e0)

### Reward Distribution

<table>
<th colspan=4>Genesis Block</th>
<tr><th>Block Height</th><th>Reward Amount</th><th>Notes</th></tr>
<tr><td>1</td><td>60,000 OHO</td><td>Initial Pre-mine, burnt in block <a href="http://www.presstab.pw/phpexplorer/OHONETWORK/block.php?blockhash=206d9cfe859798a0b0898ab00d7300be94de0f5469bb446cecb41c3e173a57e0">279917</a></td></tr>
</table>

### PoW Rewards Breakdown

<table>
<th>Block Height</th><th>Masternodes</th><th>Miner</th><th>Budget</th>
<tr><td>2-43200</td><td>20% (50 OHO)</td><td>80% (200 OHO)</td><td>N/A</td></tr>
<tr><td>43201-151200</td><td>20% (50 OHO)</td><td>70% (200 OHO)</td><td>10% (25 OHO)</td></tr>
<tr><td>151201-259200</td><td>45% (22.5 OHO)</td><td>45% (22.5 OHO)</td><td>10% (5 OHO)</td></tr>
</table>

### PoS Rewards Breakdown

<table>
<th>Phase</th><th>Block Height</th><th>Reward</th><th>Masternodes & Stakers</th><th>Budget</th>
<tr><td>Phase 0</td><td>259201-302399</td><td>50 OHO</td><td>90% (45 OHO)</td><td>10% (5 OHO)</td></tr>
<tr><td>Phase 1</td><td>302400-345599</td><td>45 OHO</td><td>90% (40.5 OHO)</td><td>10% (4.5 OHO)</td></tr>
<tr><td>Phase 2</td><td>345600-388799</td><td>40 OHO</td><td>90% (36 OHO)</td><td>10% (4 OHO)</td></tr>
<tr><td>Phase 3</td><td>388800-431999</td><td>35 OHO</td><td>90% (31.5 OHO)</td><td>10% (3.5 OHO)</td></tr>
<tr><td>Phase 4</td><td>432000-475199</td><td>30 OHO</td><td>90% (27 OHO)</td><td>10% (3 OHO)</td></tr>
<tr><td>Phase 5</td><td>475200-518399</td><td>25 OHO</td><td>90% (22.5 OHO)</td><td>10% (2.5 OHO)</td></tr>
<tr><td>Phase 6</td><td>518400-561599</td><td>20 OHO</td><td>90% (18 OHO)</td><td>10% (2 OHO)</td></tr>
<tr><td>Phase 7</td><td>561600-604799</td><td>15 OHO</td><td>90% (13.5 OHO)</td><td>10% (1.5 OHO)</td></tr>
<tr><td>Phase 8</td><td>604800-647999</td><td>10 OHO</td><td>90% (9 OHO)</td><td>10% (1 OHO)</td></tr>
<tr><td>Phase 9</td><td>648000-1154203</td><td>5 OHO</td><td>90% (4.5 OHO)</td><td>10% (0.5 OHO)</td></tr>
<tr><td>Phase X</td><td>1154203-∞</td><td>6 OHO</td><td>84% (5 OHO/zOHO)</td><td>16% (1 OHO)</td></tr>
</table>
