//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80133044.hpp"
#include "fn_80133184.hpp"
#include "fn_80133104.hpp"
#include "fn_80133124.hpp"
#include "fn_80133144.hpp"
#include "fn_80133328.hpp"
#include "fn_80133044.hpp"
#include "fn_80133208.hpp"
#include "fn_80133328.hpp"
#include "fn_80133044.hpp"
#include "fn_80133184.hpp"
#include "fn_80133104.hpp"
#include "fn_80133124.hpp"
#include "fn_80133144.hpp"
#include "fn_80133328.hpp"
#include "fn_80133044.hpp"
#include "fn_80133184.hpp"
#include "fn_80133104.hpp"
#include "fn_80133124.hpp"
#include "fn_80133144.hpp"
#include "fn_80133328.hpp"
#include "fn_801330C4.hpp"
#include "fn_80133328.hpp"
#include "fn_80133044.hpp"
#include "fn_80133184.hpp"
#include "fn_80133104.hpp"
#include "fn_80133124.hpp"
#include "fn_80133144.hpp"
#include "fn_80133328.hpp"
#include "fn_80133044.hpp"
#include "fn_80133184.hpp"
#include "fn_80133104.hpp"
#include "fn_80133124.hpp"
#include "fn_80133144.hpp"
#include "fn_80133328.hpp"
#include "fn_80133044.hpp"
#include "fn_80133184.hpp"
#include "fn_80133104.hpp"
#include "fn_80133124.hpp"
#include "fn_80133144.hpp"
#include "fn_80133328.hpp"



void fn_80019240(PPC::Runtime::GCContext* context)
{
/*80019240 00016040*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80019244 00016044*/ PPC::Runtime::ASM::mflr(context->r0);
/*80019248 00016048*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8001924C 0001604C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80019250 00016050*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*80019254 00016054*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_154 @ Get_MemoryOffset_HighBit);
/*80019258 00016058*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*8001925C 0001605C*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*80019260 00016060*/ PPC::Runtime::ASM::addi(context->r30, context->r5, MemoryOffset_154 @ Get_MemoryOffset_LowBit);
/*80019264 00016064*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80019268 00016068*/ PPC::Runtime::ASM::extsb(context->r28, context->r25);
/*8001926C 0001606C*/ PPC::Runtime::ASM::extsb(context->r29, context->r26);
/*80019270 00016070*/ PPC::Runtime::ASM::mulli(context->r27, context->r28, 0x5);
/*80019274 00016074*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*80019278 00016078*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8001927C 0001607C*/ PPC::Runtime::ASM::add(context->r4, context->r27, context->r29);
/*80019280 00016080*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r4);
/*80019284 00016084*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*80019288 00016088*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8001928C 0001608C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x11);
/*80019290 00016090*/ PPC::Runtime::ASM::bgt(.L_800196CC);
/*80019294 00016094*/ PPC::Runtime::ASM::lis(context->r3, jumptable_80496688 @ Get_MemoryOffset_HighBit);
/*80019298 00016098*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8001929C 0001609C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_80496688 @ Get_MemoryOffset_LowBit);
/*800192A0 000160A0*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*800192A4 000160A4*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800192A8 000160A8*/ PPC::Runtime::ASM::bctr();
/*800192AC 000160AC*/ PPC::Runtime::ASM::lbz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x62, context->r31));
/*800192B0 000160B0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800192B4 000160B4*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800192B8 000160B8*/ PPC::Runtime::ASM::bl(fn_80133044);
/*800192BC 000160BC*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x1);
/*800192C0 000160C0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800192C4 000160C4*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800192C8 000160C8*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*800192CC 000160CC*/ PPC::Runtime::ASM::bl(fn_80133184);
/*800192D0 000160D0*/ PPC::Runtime::ASM::mulli(context->r4, context->r28, 0x14);
/*800192D4 000160D4*/ PPC::Runtime::ASM::slwi(context->r3, context->r29, 2);
/*800192D8 000160D8*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*800192DC 000160DC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x18);
/*800192E0 000160E0*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r3);
/*800192E4 000160E4*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800192E8 000160E8*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*800192EC 000160EC*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800192F0 000160F0*/ PPC::Runtime::ASM::lbzx(context->r6, context->r5, context->r0);
/*800192F4 000160F4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800192F8 000160F8*/ PPC::Runtime::ASM::bl(fn_80133104);
/*800192FC 000160FC*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019300 00016100*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80019304 00016104*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80019308 00016108*/ PPC::Runtime::ASM::bl(fn_80133124);
/*8001930C 0001610C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0xc);
/*80019310 00016110*/ PPC::Runtime::ASM::add(context->r29, context->r27, context->r29);
/*80019314 00016114*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*80019318 00016118*/ PPC::Runtime::ASM::b(.L_80019334);
RUNTIME_PPC_JUMP_LABEL(.L_8001931C, 0x8001931C) //this is a jump label
/*8001931C 0001611C*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0x1);
/*80019320 00016120*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019324 00016124*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80019328 00016128*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*8001932C 0001612C*/ PPC::Runtime::ASM::bl(fn_80133144);
/*80019330 00016130*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80019334, 0x80019334) //this is a jump label
/*80019334 00016134*/ PPC::Runtime::ASM::lbzx(context->r0, context->r28, context->r29);
/*80019338 00016138*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8001933C 0001613C*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*80019340 00016140*/ PPC::Runtime::ASM::blt(.L_8001931C);
/*80019344 00016144*/ PPC::Runtime::ASM::bl(fn_80133328);
/*80019348 00016148*/ PPC::Runtime::ASM::b(.L_800196CC);
/*8001934C 0001614C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019350 00016150*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80019354 00016154*/ PPC::Runtime::ASM::bl(fn_80133044);
/*80019358 00016158*/ PPC::Runtime::ASM::bl(fn_80133208);
/*8001935C 0001615C*/ PPC::Runtime::ASM::bl(fn_80133328);
/*80019360 00016160*/ PPC::Runtime::ASM::b(.L_800196CC);
/*80019364 00016164*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*80019368 00016168*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8001936C 0001616C*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80019370 00016170*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 1, 26);
/*80019374 00016174*/ PPC::Runtime::ASM::extsb(context->r31, context->r0);
/*80019378 00016178*/ PPC::Runtime::ASM::bl(fn_80133044);
/*8001937C 0001617C*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x1);
/*80019380 00016180*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019384 00016184*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80019388 00016188*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*8001938C 0001618C*/ PPC::Runtime::ASM::bl(fn_80133184);
/*80019390 00016190*/ PPC::Runtime::ASM::mulli(context->r4, context->r28, 0x14);
/*80019394 00016194*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*80019398 00016198*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x18);
/*8001939C 0001619C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800193A0 000161A0*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*800193A4 000161A4*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800193A8 000161A8*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r31);
/*800193AC 000161AC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800193B0 000161B0*/ PPC::Runtime::ASM::lbzx(context->r6, context->r6, context->r0);
/*800193B4 000161B4*/ PPC::Runtime::ASM::bl(fn_80133104);
/*800193B8 000161B8*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800193BC 000161BC*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800193C0 000161C0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800193C4 000161C4*/ PPC::Runtime::ASM::bl(fn_80133124);
/*800193C8 000161C8*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0xc);
/*800193CC 000161CC*/ PPC::Runtime::ASM::add(context->r29, context->r27, context->r29);
/*800193D0 000161D0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800193D4 000161D4*/ PPC::Runtime::ASM::b(.L_800193F0);
RUNTIME_PPC_JUMP_LABEL(.L_800193D8, 0x800193D8) //this is a jump label
/*800193D8 000161D8*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0x1);
/*800193DC 000161DC*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800193E0 000161E0*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800193E4 000161E4*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*800193E8 000161E8*/ PPC::Runtime::ASM::bl(fn_80133144);
/*800193EC 000161EC*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800193F0, 0x800193F0) //this is a jump label
/*800193F0 000161F0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r28, context->r29);
/*800193F4 000161F4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*800193F8 000161F8*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800193FC 000161FC*/ PPC::Runtime::ASM::blt(.L_800193D8);
/*80019400 00016200*/ PPC::Runtime::ASM::bl(fn_80133328);
/*80019404 00016204*/ PPC::Runtime::ASM::b(.L_800196CC);
/*80019408 00016208*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*8001940C 0001620C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019410 00016210*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80019414 00016214*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 24);
/*80019418 00016218*/ PPC::Runtime::ASM::extsb(context->r31, context->r0);
/*8001941C 0001621C*/ PPC::Runtime::ASM::bl(fn_80133044);
/*80019420 00016220*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x1);
/*80019424 00016224*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019428 00016228*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8001942C 0001622C*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*80019430 00016230*/ PPC::Runtime::ASM::bl(fn_80133184);
/*80019434 00016234*/ PPC::Runtime::ASM::mulli(context->r4, context->r28, 0x14);
/*80019438 00016238*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*8001943C 0001623C*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x18);
/*80019440 00016240*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019444 00016244*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*80019448 00016248*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8001944C 0001624C*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r31);
/*80019450 00016250*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80019454 00016254*/ PPC::Runtime::ASM::lbzx(context->r6, context->r6, context->r0);
/*80019458 00016258*/ PPC::Runtime::ASM::bl(fn_80133104);
/*8001945C 0001625C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019460 00016260*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80019464 00016264*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80019468 00016268*/ PPC::Runtime::ASM::bl(fn_80133124);
/*8001946C 0001626C*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0xc);
/*80019470 00016270*/ PPC::Runtime::ASM::add(context->r29, context->r27, context->r29);
/*80019474 00016274*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*80019478 00016278*/ PPC::Runtime::ASM::b(.L_80019494);
RUNTIME_PPC_JUMP_LABEL(.L_8001947C, 0x8001947C) //this is a jump label
/*8001947C 0001627C*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0x1);
/*80019480 00016280*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019484 00016284*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80019488 00016288*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*8001948C 0001628C*/ PPC::Runtime::ASM::bl(fn_80133144);
/*80019490 00016290*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80019494, 0x80019494) //this is a jump label
/*80019494 00016294*/ PPC::Runtime::ASM::lbzx(context->r0, context->r28, context->r29);
/*80019498 00016298*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8001949C 0001629C*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800194A0 000162A0*/ PPC::Runtime::ASM::blt(.L_8001947C);
/*800194A4 000162A4*/ PPC::Runtime::ASM::bl(fn_80133328);
/*800194A8 000162A8*/ PPC::Runtime::ASM::b(.L_800196CC);
/*800194AC 000162AC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*800194B0 000162B0*/ PPC::Runtime::ASM::bl(fn_801330C4);
/*800194B4 000162B4*/ PPC::Runtime::ASM::bl(fn_80133328);
/*800194B8 000162B8*/ PPC::Runtime::ASM::b(.L_800196CC);
/*800194BC 000162BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*800194C0 000162C0*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800194C4 000162C4*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800194C8 000162C8*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 1, 27);
/*800194CC 000162CC*/ PPC::Runtime::ASM::extsb(context->r31, context->r0);
/*800194D0 000162D0*/ PPC::Runtime::ASM::bl(fn_80133044);
/*800194D4 000162D4*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x1);
/*800194D8 000162D8*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800194DC 000162DC*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800194E0 000162E0*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*800194E4 000162E4*/ PPC::Runtime::ASM::bl(fn_80133184);
/*800194E8 000162E8*/ PPC::Runtime::ASM::mulli(context->r4, context->r28, 0x14);
/*800194EC 000162EC*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*800194F0 000162F0*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x18);
/*800194F4 000162F4*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800194F8 000162F8*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*800194FC 000162FC*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80019500 00016300*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r31);
/*80019504 00016304*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80019508 00016308*/ PPC::Runtime::ASM::lbzx(context->r6, context->r6, context->r0);
/*8001950C 0001630C*/ PPC::Runtime::ASM::bl(fn_80133104);
/*80019510 00016310*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019514 00016314*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80019518 00016318*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8001951C 0001631C*/ PPC::Runtime::ASM::bl(fn_80133124);
/*80019520 00016320*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0xc);
/*80019524 00016324*/ PPC::Runtime::ASM::add(context->r29, context->r27, context->r29);
/*80019528 00016328*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8001952C 0001632C*/ PPC::Runtime::ASM::b(.L_80019548);
RUNTIME_PPC_JUMP_LABEL(.L_80019530, 0x80019530) //this is a jump label
/*80019530 00016330*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0x1);
/*80019534 00016334*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019538 00016338*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8001953C 0001633C*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*80019540 00016340*/ PPC::Runtime::ASM::bl(fn_80133144);
/*80019544 00016344*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80019548, 0x80019548) //this is a jump label
/*80019548 00016348*/ PPC::Runtime::ASM::lbzx(context->r0, context->r28, context->r29);
/*8001954C 0001634C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80019550 00016350*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*80019554 00016354*/ PPC::Runtime::ASM::blt(.L_80019530);
/*80019558 00016358*/ PPC::Runtime::ASM::bl(fn_80133328);
/*8001955C 0001635C*/ PPC::Runtime::ASM::b(.L_800196CC);
/*80019560 00016360*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*80019564 00016364*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019568 00016368*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8001956C 0001636C*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 28);
/*80019570 00016370*/ PPC::Runtime::ASM::extsb(context->r31, context->r0);
/*80019574 00016374*/ PPC::Runtime::ASM::bl(fn_80133044);
/*80019578 00016378*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x1);
/*8001957C 0001637C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019580 00016380*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80019584 00016384*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*80019588 00016388*/ PPC::Runtime::ASM::bl(fn_80133184);
/*8001958C 0001638C*/ PPC::Runtime::ASM::mulli(context->r4, context->r28, 0x14);
/*80019590 00016390*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*80019594 00016394*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x18);
/*80019598 00016398*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8001959C 0001639C*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*800195A0 000163A0*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800195A4 000163A4*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r31);
/*800195A8 000163A8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800195AC 000163AC*/ PPC::Runtime::ASM::lbzx(context->r6, context->r6, context->r0);
/*800195B0 000163B0*/ PPC::Runtime::ASM::bl(fn_80133104);
/*800195B4 000163B4*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800195B8 000163B8*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800195BC 000163BC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800195C0 000163C0*/ PPC::Runtime::ASM::bl(fn_80133124);
/*800195C4 000163C4*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0xc);
/*800195C8 000163C8*/ PPC::Runtime::ASM::add(context->r29, context->r27, context->r29);
/*800195CC 000163CC*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800195D0 000163D0*/ PPC::Runtime::ASM::b(.L_800195EC);
RUNTIME_PPC_JUMP_LABEL(.L_800195D4, 0x800195D4) //this is a jump label
/*800195D4 000163D4*/ PPC::Runtime::ASM::addi(context->r0, context->r27, 0x1);
/*800195D8 000163D8*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800195DC 000163DC*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800195E0 000163E0*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*800195E4 000163E4*/ PPC::Runtime::ASM::bl(fn_80133144);
/*800195E8 000163E8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800195EC, 0x800195EC) //this is a jump label
/*800195EC 000163EC*/ PPC::Runtime::ASM::lbzx(context->r0, context->r28, context->r29);
/*800195F0 000163F0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*800195F4 000163F4*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800195F8 000163F8*/ PPC::Runtime::ASM::blt(.L_800195D4);
/*800195FC 000163FC*/ PPC::Runtime::ASM::bl(fn_80133328);
/*80019600 00016400*/ PPC::Runtime::ASM::b(.L_800196CC);
/*80019604 00016404*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*80019608 00016408*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8001960C 0001640C*/ PPC::Runtime::ASM::beq(.L_80019628);
/*80019610 00016410*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*80019614 00016414*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r4);
/*80019618 00016418*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*8001961C 0001641C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80019620 00016420*/ PPC::Runtime::ASM::extsh(context->r27, context->r0);
/*80019624 00016424*/ PPC::Runtime::ASM::b(.L_80019634);
RUNTIME_PPC_JUMP_LABEL(.L_80019628, 0x80019628) //this is a jump label
/*80019628 00016428*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*8001962C 0001642C*/ PPC::Runtime::ASM::lbzx(context->r27, context->r3, context->r4);
/*80019630 00016430*/ PPC::Runtime::ASM::extsb(context->r27, context->r27);
RUNTIME_PPC_JUMP_LABEL(.L_80019634, 0x80019634) //this is a jump label
/*80019634 00016434*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019638 00016438*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8001963C 0001643C*/ PPC::Runtime::ASM::bl(fn_80133044);
/*80019640 00016440*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*80019644 00016444*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019648 00016448*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*8001964C 0001644C*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r0, 30);
/*80019650 00016450*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x1);
/*80019654 00016454*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*80019658 00016458*/ PPC::Runtime::ASM::bl(fn_80133184);
/*8001965C 0001645C*/ PPC::Runtime::ASM::mulli(context->r4, context->r28, 0x14);
/*80019660 00016460*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r31));
/*80019664 00016464*/ PPC::Runtime::ASM::slwi(context->r3, context->r29, 2);
/*80019668 00016468*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*8001966C 0001646C*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r3);
/*80019670 00016470*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x18);
/*80019674 00016474*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*80019678 00016478*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8001967C 0001647C*/ PPC::Runtime::ASM::lbzx(context->r6, context->r4, context->r0);
/*80019680 00016480*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80019684 00016484*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80019688 00016488*/ PPC::Runtime::ASM::bl(fn_80133104);
/*8001968C 0001648C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80019690 00016490*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80019694 00016494*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80019698 00016498*/ PPC::Runtime::ASM::bl(fn_80133124);
/*8001969C 0001649C*/ PPC::Runtime::ASM::extsh(context->r27, context->r27);
/*800196A0 000164A0*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800196A4 000164A4*/ PPC::Runtime::ASM::b(.L_800196C0);
RUNTIME_PPC_JUMP_LABEL(.L_800196A8, 0x800196A8) //this is a jump label
/*800196A8 000164A8*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0x1);
/*800196AC 000164AC*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800196B0 000164B0*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800196B4 000164B4*/ PPC::Runtime::ASM::extsb(context->r5, context->r0);
/*800196B8 000164B8*/ PPC::Runtime::ASM::bl(fn_80133144);
/*800196BC 000164BC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800196C0, 0x800196C0) //this is a jump label
/*800196C0 000164C0*/ PPC::Runtime::ASM::cmpw(context->r28, context->r27);
/*800196C4 000164C4*/ PPC::Runtime::ASM::blt(.L_800196A8);
/*800196C8 000164C8*/ PPC::Runtime::ASM::bl(fn_80133328);
RUNTIME_PPC_JUMP_LABEL(.L_800196CC, 0x800196CC) //this is a jump label
/*800196CC 000164CC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800196D0 000164D0*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*800196D4 000164D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800196D8 000164D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800196DC 000164DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800196E0 000164E0*/ PPC::Runtime::ASM::blr();
}