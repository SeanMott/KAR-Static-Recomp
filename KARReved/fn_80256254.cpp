//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7CF4.hpp"
#include "fn_8019203C.hpp"
#include "fn_80250340.hpp"
#include "fn_80250978.hpp"
#include "fn_AsyncImage_FreeLoadBuffer_TakeNoParams.hpp"
#include "fn_80252E38.hpp"
#include "fn_80252CE8.hpp"
#include "fn_8024F488.hpp"
#include "fn_802540A8.hpp"
#include "fn_801C7568.hpp"
#include "fn_801C75D4.hpp"
#include "fn_80191F18.hpp"
#include "fn_80191EF8.hpp"
#include "fn_801C7548.hpp"
#include "fn_80191FDC.hpp"
#include "fn_80252E38.hpp"
#include "fn_80252CE8.hpp"
#include "fn_80251044.hpp"
#include "fn_8024F488.hpp"
#include "fn_802568DC.hpp"
#include "fn_8024E618.hpp"
#include "fn_80254C50.hpp"



void fn_80256254(PPC::Runtime::GCContext* context)
{
/*80256254 00253054*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80256258 00253058*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025625C 0025305C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80256260 00253060*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80256264 00253064*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80256268 00253068*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*8025626C 0025306C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1);
/*80256270 00253070*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80256274 00253074*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80256278 00253078*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8025627C 0025307C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80256280 00253080*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*80256284 00253084*/ PPC::Runtime::ASM::bne(.L_80256298);
/*80256288 00253088*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8025628C 0025308C*/ PPC::Runtime::ASM::bl(fn_801C7CF4);
/*80256290 00253090*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a0, context->r31));
/*80256294 00253094*/ PPC::Runtime::ASM::b(.L_802562A4);
RUNTIME_PPC_JUMP_LABEL(.L_80256298, 0x80256298) //this is a jump label
/*80256298 00253098*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8025629C 0025309C*/ PPC::Runtime::ASM::bl(fn_8019203C);
/*802562A0 002530A0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802562A4, 0x802562A4) //this is a jump label
/*802562A4 002530A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802562A8 002530A8*/ PPC::Runtime::ASM::bl(fn_80250340);
/*802562AC 002530AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802562B0 002530B0*/ PPC::Runtime::ASM::bl(fn_80250978);
/*802562B4 002530B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802562B8 002530B8*/ PPC::Runtime::ASM::bl(fn_AsyncImage_FreeLoadBuffer_TakeNoParams);
/*802562BC 002530BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35b, context->r31));
/* 802562C0 002530C0  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*802562C4 002530C4*/ PPC::Runtime::ASM::beq(.L_80256300);
/*802562C8 002530C8*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*802562CC 002530CC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802562D0 002530D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x214, context->r31));
/*802562D4 002530D4*/ PPC::Runtime::ASM::bl(fn_80252E38);
/*802562D8 002530D8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802562DC 002530DC*/ PPC::Runtime::ASM::bl(fn_80252CE8);
/*802562E0 002530E0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2D98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802562E4 002530E4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802562E8 002530E8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2D9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802562EC 002530EC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*802562F0 002530F0*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*802562F4 002530F4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802562F8 002530F8*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*802562FC 002530FC*/ PPC::Runtime::ASM::b(.L_802565C8);
RUNTIME_PPC_JUMP_LABEL(.L_80256300, 0x80256300) //this is a jump label
/*80256300 00253100*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80256304 00253104*/ PPC::Runtime::ASM::bl(fn_802540A8);
/*80256308 00253108*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8025630C 0025310C*/ PPC::Runtime::ASM::bne(.L_80256324);
/*80256310 00253110*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1NULL_3 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80256314 00253114*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80256318 00253118*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x5c);
/*8025631C 0025311C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*80256320 00253120*/ PPC::Runtime::ASM::b(.L_80256334);
RUNTIME_PPC_JUMP_LABEL(.L_80256324, 0x80256324) //this is a jump label
/*80256324 00253124*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1NULL_3 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80256328 00253128*/ PPC::Runtime::ASM::li(context->r28, 0x1);
/*8025632C 0025312C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x80);
/*80256330 00253130*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80256334, 0x80256334) //this is a jump label
/*80256334 00253134*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*80256338 00253138*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1);
/*8025633C 0025313C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80256340 00253140*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r31));
/*80256344 00253144*/ PPC::Runtime::ASM::bne(.L_80256364);
/*80256348 00253148*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*8025634C 0025314C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x10c);
/*80256350 00253150*/ PPC::Runtime::ASM::bl(fn_801C7568);
/*80256354 00253154*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*80256358 00253158*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x100);
/*8025635C 0025315C*/ PPC::Runtime::ASM::bl(fn_801C75D4);
/*80256360 00253160*/ PPC::Runtime::ASM::b(.L_8025637C);
RUNTIME_PPC_JUMP_LABEL(.L_80256364, 0x80256364) //this is a jump label
/*80256364 00253164*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*80256368 00253168*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x10c);
/*8025636C 0025316C*/ PPC::Runtime::ASM::bl(fn_80191F18);
/*80256370 00253170*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*80256374 00253174*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x100);
/*80256378 00253178*/ PPC::Runtime::ASM::bl(fn_80191EF8);
RUNTIME_PPC_JUMP_LABEL(.L_8025637C, 0x8025637C) //this is a jump label
/*8025637C 0025317C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*80256380 00253180*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*80256384 00253184*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r31));
/*80256388 00253188*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8025638C 0025318C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80256390 00253190*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r31));
/*80256394 00253194*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*80256398 00253198*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r31));
/*8025639C 0025319C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802563A0 002531A0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*802563A4 002531A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r31));
/*802563A8 002531A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*802563AC 002531AC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*802563B0 002531B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802563B4 002531B4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*802563B8 002531B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r31));
/*802563BC 002531BC*/ PPC::Runtime::ASM::beq(.L_80256418);
/*802563C0 002531C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*802563C4 002531C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*802563C8 002531C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x208, context->r31));
/*802563CC 002531CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*802563D0 002531D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r31));
/*802563D4 002531D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802563D8 002531D8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*802563DC 002531DC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*802563E0 002531E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r31));
/*802563E4 002531E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*802563E8 002531E8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r31));
/*802563EC 002531EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*802563F0 002531F0*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*802563F4 002531F4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*802563F8 002531F8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r31));
/*802563FC 002531FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*80256400 00253200*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*80256404 00253204*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80256408 00253208*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*8025640C 0025320C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80256410 00253210*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r31));
/*80256414 00253214*/ PPC::Runtime::ASM::b(.L_80256460);
RUNTIME_PPC_JUMP_LABEL(.L_80256418, 0x80256418) //this is a jump label
/*80256418 00253218*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*8025641C 0025321C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80256420 00253220*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x208, context->r31));
/*80256424 00253224*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*80256428 00253228*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r31));
/*8025642C 0025322C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80256430 00253230*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80256434 00253234*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r31));
/*80256438 00253238*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*8025643C 0025323C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x110, context->r31));
/*80256440 00253240*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80256444 00253244*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80256448 00253248*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r31));
/*8025644C 0025324C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*80256450 00253250*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r31));
/*80256454 00253254*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80256458 00253258*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8025645C 0025325C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80256460, 0x80256460) //this is a jump label
/*80256460 00253260*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*80256464 00253264*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2D98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80256468 00253268*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8025646C 0025326C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80256470 00253270*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80256474 00253274*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f1);
/*80256478 00253278*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*8025647C 0025327C*/ PPC::Runtime::ASM::bge(.L_80256484);
/*80256480 00253280*/ PPC::Runtime::ASM::fneg(context->f2, context->f2);
RUNTIME_PPC_JUMP_LABEL(.L_80256484, 0x80256484) //this is a jump label
/*80256484 00253284*/ PPC::Runtime::ASM::xoris(context->r3, context->r0, 0x8000);
/*80256488 00253288*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8025648C 0025328C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80256490 00253290*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x1);
/*80256494 00253294*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E2DA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80256498 00253298*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025649C 0025329C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802564A0 002532A0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*802564A4 002532A4*/ PPC::Runtime::ASM::fdivs(context->f0, context->f2, context->f0);
/*802564A8 002532A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x210, context->r31));
/*802564AC 002532AC*/ PPC::Runtime::ASM::bne(.L_802564C0);
/*802564B0 002532B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*802564B4 002532B4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xdc);
/*802564B8 002532B8*/ PPC::Runtime::ASM::bl(fn_801C7548);
/*802564BC 002532BC*/ PPC::Runtime::ASM::b(.L_802564CC);
RUNTIME_PPC_JUMP_LABEL(.L_802564C0, 0x802564C0) //this is a jump label
/*802564C0 002532C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e8, context->r31));
/*802564C4 002532C4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xdc);
/*802564C8 002532C8*/ PPC::Runtime::ASM::bl(fn_80191FDC);
RUNTIME_PPC_JUMP_LABEL(.L_802564CC, 0x802564CC) //this is a jump label
/*802564CC 002532CC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r31));
/*802564D0 002532D0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802564D4 002532D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1fc, context->r31));
/*802564D8 002532D8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802564DC 002532DC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*802564E0 002532E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r31));
/*802564E4 002532E4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r31));
/*802564E8 002532E8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r31));
/*802564EC 002532EC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*802564F0 002532F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r31));
/*802564F4 002532F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r31));
/*802564F8 002532F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r31));
/*802564FC 002532FC*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80256500 00253300*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r31));
/*80256504 00253304*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r31));
/*80256508 00253308*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f0, context->r31));
/*8025650C 0025330C*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80256510 00253310*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r31));
/*80256514 00253314*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r31));
/*80256518 00253318*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f4, context->r31));
/*8025651C 0025331C*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80256520 00253320*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r31));
/*80256524 00253324*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r31));
/*80256528 00253328*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1f8, context->r31));
/*8025652C 0025332C*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80256530 00253330*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r31));
/*80256534 00253334*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*80256538 00253338*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8025653C 0025333C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x214, context->r31));
/*80256540 00253340*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ec, context->r31));
/*80256544 00253344*/ PPC::Runtime::ASM::bl(fn_80252E38);
/*80256548 00253348*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8025654C 0025334C*/ PPC::Runtime::ASM::bl(fn_80252CE8);
/*80256550 00253350*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e4, context->r31));
/*80256554 00253354*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80256558 00253358*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025655C 0025335C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80256560 00253360*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*80256564 00253364*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E2DA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80256568 00253368*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8025656C 0025336C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2D9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80256570 00253370*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80256574 00253374*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80256578 00253378*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8025657C 0025337C*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f0);
/*80256580 00253380*/ PPC::Runtime::ASM::bl(fn_80251044);
/*80256584 00253384*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2D98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80256588 00253388*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8025658C 0025338C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80256590 00253390*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80256594 00253394*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80256598 00253398*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2D9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025659C 0025339C*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*802565A0 002533A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802565A4 002533A4*/ PPC::Runtime::ASM::bl(fn_802568DC);
/*802565A8 002533A8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r29));
/*802565AC 002533AC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802565B0 002533B0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r29));
/*802565B4 002533B4*/ PPC::Runtime::ASM::bl(fn_80429B24);
/*802565B8 002533B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802565BC 002533BC*/ PPC::Runtime::ASM::bl(fn_8024E618);
/*802565C0 002533C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802565C4 002533C4*/ PPC::Runtime::ASM::bl(fn_80254C50);
RUNTIME_PPC_JUMP_LABEL(.L_802565C8, 0x802565C8) //this is a jump label
/*802565C8 002533C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802565CC 002533CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802565D0 002533D0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802565D4 002533D4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802565D8 002533D8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802565DC 002533DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802565E0 002533E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802565E4 002533E4*/ PPC::Runtime::ASM::blr();
}