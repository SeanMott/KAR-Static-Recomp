//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8034D384.hpp"
#include "fn_8034DB38.hpp"
#include "fn_8034E0FC.hpp"
#include "fn_8034E4E4.hpp"
#include "fn_8034E9A4.hpp"
#include "fn_8034F1C4.hpp"
#include "fn_8034F684.hpp"
#include "fn_8034FC88.hpp"
#include "fn_80350440.hpp"
#include "fn_80350CFC.hpp"
#include "fn_803511E8.hpp"
#include "fn_80351AB4.hpp"
#include "fn_803521D0.hpp"
#include "fn_80352DFC.hpp"
#include "fn_80353734.hpp"
#include "fn_80353E50.hpp"
#include "fn_8035420C.hpp"
#include "fn_80354738.hpp"
#include "fn_80354EC0.hpp"
#include "fn_80355498.hpp"
#include "fn_80355B48.hpp"
#include "fn_80355F04.hpp"
#include "fn_803567D4.hpp"
#include "fn_803567D4.hpp"
#include "fn_803567D4.hpp"
#include "fn_803567D4.hpp"
#include "fn_8035691C.hpp"
#include "fn_8035691C.hpp"



void fn_80356254(PPC::Runtime::GCContext* context)
{
/*80356254 00353054*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80356258 00353058*/ PPC::Runtime::ASM::mflr(context->r0);
/*8035625C 0035305C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80356260 00353060*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80356264 00353064*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80356268 00353068*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8035626C 0035306C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80356270 00353070*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80356274 00353074*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80356278 00353078*/ PPC::Runtime::ASM::lis(context->r4, lbl_804EA548 @ Get_MemoryOffset_HighBit);
/*8035627C 0035307C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80356280 00353080*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_804EA548 @ Get_MemoryOffset_LowBit);
/*80356284 00353084*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1230);
/*80356288 00353088*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8035628C 0035308C*/ PPC::Runtime::ASM::bl(OSReport);
/*80356290 00353090*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1244);
/*80356294 00353094*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356298 00353098*/ PPC::Runtime::ASM::bl(OSReport);
/*8035629C 0035309C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803562A0 003530A0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803562A4 003530A4*/ PPC::Runtime::ASM::bl(fn_8034D384);
/*803562A8 003530A8*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x54);
/*803562AC 003530AC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803562B0 003530B0*/ PPC::Runtime::ASM::bl(fn_8034DB38);
/*803562B4 003530B4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0xa0);
/*803562B8 003530B8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803562BC 003530BC*/ PPC::Runtime::ASM::bl(fn_8034E0FC);
/*803562C0 003530C0*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0xd0);
/*803562C4 003530C4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803562C8 003530C8*/ PPC::Runtime::ASM::bl(fn_8034E4E4);
/*803562CC 003530CC*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x108);
/*803562D0 003530D0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803562D4 003530D4*/ PPC::Runtime::ASM::bl(fn_8034E9A4);
/*803562D8 003530D8*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x160);
/*803562DC 003530DC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803562E0 003530E0*/ PPC::Runtime::ASM::bl(fn_8034F1C4);
/*803562E4 003530E4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x198);
/*803562E8 003530E8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803562EC 003530EC*/ PPC::Runtime::ASM::bl(fn_8034F684);
/*803562F0 003530F0*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x1dc);
/*803562F4 003530F4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803562F8 003530F8*/ PPC::Runtime::ASM::bl(fn_8034FC88);
/*803562FC 003530FC*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x250);
/*80356300 00353100*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80356304 00353104*/ PPC::Runtime::ASM::bl(fn_80350440);
/*80356308 00353108*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x2d4);
/*8035630C 0035310C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80356310 00353110*/ PPC::Runtime::ASM::bl(fn_80350CFC);
/*80356314 00353114*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x318);
/*80356318 00353118*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8035631C 0035311C*/ PPC::Runtime::ASM::bl(fn_803511E8);
/*80356320 00353120*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x36c);
/*80356324 00353124*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80356328 00353128*/ PPC::Runtime::ASM::bl(fn_80351AB4);
/*8035632C 0035312C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x3b0);
/*80356330 00353130*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80356334 00353134*/ PPC::Runtime::ASM::bl(fn_803521D0);
/*80356338 00353138*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x424);
/*8035633C 0035313C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80356340 00353140*/ PPC::Runtime::ASM::bl(fn_80352DFC);
/*80356344 00353144*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x47c);
/*80356348 00353148*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8035634C 0035314C*/ PPC::Runtime::ASM::bl(fn_80353734);
/*80356350 00353150*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x4c0);
/*80356354 00353154*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80356358 00353158*/ PPC::Runtime::ASM::bl(fn_80353E50);
/*8035635C 0035315C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x4e4);
/*80356360 00353160*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80356364 00353164*/ PPC::Runtime::ASM::bl(fn_8035420C);
/*80356368 00353168*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x520);
/*8035636C 0035316C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80356370 00353170*/ PPC::Runtime::ASM::bl(fn_80354738);
/*80356374 00353174*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x568);
/*80356378 00353178*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8035637C 0035317C*/ PPC::Runtime::ASM::bl(fn_80354EC0);
/*80356380 00353180*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x5a0);
/*80356384 00353184*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80356388 00353188*/ PPC::Runtime::ASM::bl(fn_80355498);
/*8035638C 0035318C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x5e0);
/*80356390 00353190*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80356394 00353194*/ PPC::Runtime::ASM::bl(fn_80355B48);
/*80356398 00353198*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x604);
/*8035639C 0035319C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803563A0 003531A0*/ PPC::Runtime::ASM::bl(fn_80355F04);
/*803563A4 003531A4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*803563A8 003531A8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803563AC 003531AC*/ PPC::Runtime::ASM::bl(OSReport);
/*803563B0 003531B0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB370 @ Get_MemoryOffset_SDA21);
/*803563B4 003531B4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803563B8 003531B8*/ PPC::Runtime::ASM::bl(OSReport);
/*803563BC 003531BC*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x624);
/*803563C0 003531C0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1264);
/*803563C4 003531C4*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*803563C8 003531C8*/ PPC::Runtime::ASM::bl(fn_803567D4);
/*803563CC 003531CC*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x674);
/*803563D0 003531D0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1274);
/*803563D4 003531D4*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*803563D8 003531D8*/ PPC::Runtime::ASM::bl(fn_803567D4);
/*803563DC 003531DC*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x6c4);
/*803563E0 003531E0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1284);
/*803563E4 003531E4*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*803563E8 003531E8*/ PPC::Runtime::ASM::bl(fn_803567D4);
/*803563EC 003531EC*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x714);
/*803563F0 003531F0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1294);
/*803563F4 003531F4*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*803563F8 003531F8*/ PPC::Runtime::ASM::bl(fn_803567D4);
/*803563FC 003531FC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*80356400 00353200*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356404 00353204*/ PPC::Runtime::ASM::bl(OSReport);
/*80356408 00353208*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 7 @ Get_MemoryOffset_SDA21);
/*8035640C 0035320C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356410 00353210*/ PPC::Runtime::ASM::bl(OSReport);
/*80356414 00353214*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*80356418 00353218*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8035641C 0035321C*/ PPC::Runtime::ASM::bl(OSReport);
/*80356420 00353220*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*80356424 00353224*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356428 00353228*/ PPC::Runtime::ASM::bl(OSReport);
/*8035642C 0035322C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x12a4);
/*80356430 00353230*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*80356434 00353234*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356438 00353238*/ PPC::Runtime::ASM::bl(OSReport);
/*8035643C 0035323C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*80356440 00353240*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356444 00353244*/ PPC::Runtime::ASM::bl(OSReport);
/*80356448 00353248*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB360 @ Get_MemoryOffset_SDA21);
/*8035644C 0035324C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356450 00353250*/ PPC::Runtime::ASM::bl(OSReport);
/*80356454 00353254*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80356458 00353258*/ PPC::Runtime::ASM::mr(context->r29, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_8035645C, 0x8035645C) //this is a jump label
/*8035645C 0035325C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x764, context->r29));
/*80356460 00353260*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB364 @ Get_MemoryOffset_SDA21);
/* 80356464 00353264  4C C6 32 42 */ crset context->cr1eq
/*80356468 00353268*/ PPC::Runtime::ASM::bl(OSReport);
/*8035646C 0035326C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80356470 00353270*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*80356474 00353274*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x4);
/*80356478 00353278*/ PPC::Runtime::ASM::blt(.L_8035645C);
/*8035647C 0035327C*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 7 @ Get_MemoryOffset_SDA21);
/*80356480 00353280*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356484 00353284*/ PPC::Runtime::ASM::bl(OSReport);
/*80356488 00353288*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x774);
/*8035648C 0035328C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x12b4);
/*80356490 00353290*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80356494 00353294*/ PPC::Runtime::ASM::bl(fn_8035691C);
/*80356498 00353298*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8035649C 0035329C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803564A0 003532A0*/ PPC::Runtime::ASM::bl(OSReport);
/*803564A4 003532A4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x12c4);
/*803564A8 003532A8*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*803564AC 003532AC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803564B0 003532B0*/ PPC::Runtime::ASM::bl(OSReport);
/*803564B4 003532B4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*803564B8 003532B8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803564BC 003532BC*/ PPC::Runtime::ASM::bl(OSReport);
/*803564C0 003532C0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB360 @ Get_MemoryOffset_SDA21);
/*803564C4 003532C4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803564C8 003532C8*/ PPC::Runtime::ASM::bl(OSReport);
/*803564CC 003532CC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803564D0 003532D0*/ PPC::Runtime::ASM::mr(context->r29, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_803564D4, 0x803564D4) //this is a jump label
/*803564D4 003532D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7b0, context->r29));
/*803564D8 003532D8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB364 @ Get_MemoryOffset_SDA21);
/* 803564DC 003532DC  4C C6 32 42 */ crset context->cr1eq
/*803564E0 003532E0*/ PPC::Runtime::ASM::bl(OSReport);
/*803564E4 003532E4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*803564E8 003532E8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*803564EC 003532EC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x7);
/*803564F0 003532F0*/ PPC::Runtime::ASM::blt(.L_803564D4);
/*803564F4 003532F4*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 7 @ Get_MemoryOffset_SDA21);
/*803564F8 003532F8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803564FC 003532FC*/ PPC::Runtime::ASM::bl(OSReport);
/*80356500 00353300*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*80356504 00353304*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356508 00353308*/ PPC::Runtime::ASM::bl(OSReport);
/*8035650C 0035330C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x12dc);
/*80356510 00353310*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*80356514 00353314*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356518 00353318*/ PPC::Runtime::ASM::bl(OSReport);
/*8035651C 0035331C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*80356520 00353320*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356524 00353324*/ PPC::Runtime::ASM::bl(OSReport);
/*80356528 00353328*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB360 @ Get_MemoryOffset_SDA21);
/*8035652C 0035332C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356530 00353330*/ PPC::Runtime::ASM::bl(OSReport);
/*80356534 00353334*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80356538 00353338*/ PPC::Runtime::ASM::mr(context->r29, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_8035653C, 0x8035653C) //this is a jump label
/*8035653C 0035333C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7cc, context->r29));
/*80356540 00353340*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB364 @ Get_MemoryOffset_SDA21);
/* 80356544 00353344  4C C6 32 42 */ crset context->cr1eq
/*80356548 00353348*/ PPC::Runtime::ASM::bl(OSReport);
/*8035654C 0035334C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80356550 00353350*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*80356554 00353354*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x7);
/*80356558 00353358*/ PPC::Runtime::ASM::blt(.L_8035653C);
/*8035655C 0035335C*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 7 @ Get_MemoryOffset_SDA21);
/*80356560 00353360*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356564 00353364*/ PPC::Runtime::ASM::bl(OSReport);
/*80356568 00353368*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8035656C 0035336C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356570 00353370*/ PPC::Runtime::ASM::bl(OSReport);
/*80356574 00353374*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x12f8);
/*80356578 00353378*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8035657C 0035337C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356580 00353380*/ PPC::Runtime::ASM::bl(OSReport);
/*80356584 00353384*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*80356588 00353388*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8035658C 0035338C*/ PPC::Runtime::ASM::bl(OSReport);
/*80356590 00353390*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB360 @ Get_MemoryOffset_SDA21);
/*80356594 00353394*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356598 00353398*/ PPC::Runtime::ASM::bl(OSReport);
/*8035659C 0035339C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803565A0 003533A0*/ PPC::Runtime::ASM::mr(context->r29, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_803565A4, 0x803565A4) //this is a jump label
/*803565A4 003533A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e8, context->r29));
/*803565A8 003533A8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB364 @ Get_MemoryOffset_SDA21);
/* 803565AC 003533AC  4C C6 32 42 */ crset context->cr1eq
/*803565B0 003533B0*/ PPC::Runtime::ASM::bl(OSReport);
/*803565B4 003533B4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*803565B8 003533B8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*803565BC 003533BC*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x3);
/*803565C0 003533C0*/ PPC::Runtime::ASM::blt(.L_803565A4);
/*803565C4 003533C4*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 7 @ Get_MemoryOffset_SDA21);
/*803565C8 003533C8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803565CC 003533CC*/ PPC::Runtime::ASM::bl(OSReport);
/*803565D0 003533D0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*803565D4 003533D4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803565D8 003533D8*/ PPC::Runtime::ASM::bl(OSReport);
/*803565DC 003533DC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1318);
/*803565E0 003533E0*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*803565E4 003533E4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803565E8 003533E8*/ PPC::Runtime::ASM::bl(OSReport);
/*803565EC 003533EC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*803565F0 003533F0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803565F4 003533F4*/ PPC::Runtime::ASM::bl(OSReport);
/*803565F8 003533F8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB360 @ Get_MemoryOffset_SDA21);
/*803565FC 003533FC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356600 00353400*/ PPC::Runtime::ASM::bl(OSReport);
/*80356604 00353404*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80356608 00353408*/ PPC::Runtime::ASM::mr(context->r29, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_8035660C, 0x8035660C) //this is a jump label
/*8035660C 0035340C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f4, context->r29));
/*80356610 00353410*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB364 @ Get_MemoryOffset_SDA21);
/* 80356614 00353414  4C C6 32 42 */ crset context->cr1eq
/*80356618 00353418*/ PPC::Runtime::ASM::bl(OSReport);
/*8035661C 0035341C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80356620 00353420*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*80356624 00353424*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x3);
/*80356628 00353428*/ PPC::Runtime::ASM::blt(.L_8035660C);
/*8035662C 0035342C*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 7 @ Get_MemoryOffset_SDA21);
/*80356630 00353430*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356634 00353434*/ PPC::Runtime::ASM::bl(OSReport);
/*80356638 00353438*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x800);
/*8035663C 0035343C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1330);
/*80356640 00353440*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80356644 00353444*/ PPC::Runtime::ASM::bl(fn_8035691C);
/*80356648 00353448*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x83c, context->r28));
/*8035664C 0035344C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*80356650 00353450*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356654 00353454*/ PPC::Runtime::ASM::bl(OSReport);
/*80356658 00353458*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xfcc);
/*8035665C 0035345C*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*80356660 00353460*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356664 00353464*/ PPC::Runtime::ASM::bl(OSReport);
/*80356668 00353468*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8035666C 0035346C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356670 00353470*/ PPC::Runtime::ASM::bl(OSReport);
/*80356674 00353474*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80356678 00353478*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 8035667C 0035347C  4C C6 32 42 */ crset context->cr1eq
/*80356680 00353480*/ PPC::Runtime::ASM::bl(OSReport);
/*80356684 00353484*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x840, context->r28));
/*80356688 00353488*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8035668C 0035348C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356690 00353490*/ PPC::Runtime::ASM::bl(OSReport);
/*80356694 00353494*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xd00);
/*80356698 00353498*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*8035669C 0035349C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803566A0 003534A0*/ PPC::Runtime::ASM::bl(OSReport);
/*803566A4 003534A4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*803566A8 003534A8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803566AC 003534AC*/ PPC::Runtime::ASM::bl(OSReport);
/*803566B0 003534B0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*803566B4 003534B4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 803566B8 003534B8  4C C6 32 42 */ crset context->cr1eq
/*803566BC 003534BC*/ PPC::Runtime::ASM::bl(OSReport);
/*803566C0 003534C0*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x844, context->r28));
/*803566C4 003534C4*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*803566C8 003534C8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803566CC 003534CC*/ PPC::Runtime::ASM::bl(OSReport);
/*803566D0 003534D0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1348);
/*803566D4 003534D4*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*803566D8 003534D8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803566DC 003534DC*/ PPC::Runtime::ASM::bl(OSReport);
/*803566E0 003534E0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*803566E4 003534E4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803566E8 003534E8*/ PPC::Runtime::ASM::bl(OSReport);
/*803566EC 003534EC*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*803566F0 003534F0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 803566F4 003534F4  4C C6 32 42 */ crset context->cr1eq
/*803566F8 003534F8*/ PPC::Runtime::ASM::bl(OSReport);
/*803566FC 003534FC*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x848, context->r28));
/*80356700 00353500*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*80356704 00353504*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356708 00353508*/ PPC::Runtime::ASM::bl(OSReport);
/*8035670C 0035350C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x1358);
/*80356710 00353510*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*80356714 00353514*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356718 00353518*/ PPC::Runtime::ASM::bl(OSReport);
/*8035671C 0035351C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*80356720 00353520*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356724 00353524*/ PPC::Runtime::ASM::bl(OSReport);
/*80356728 00353528*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8035672C 0035352C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB358 @ Get_MemoryOffset_SDA21);
/* 80356730 00353530  4C C6 32 42 */ crset context->cr1eq
/*80356734 00353534*/ PPC::Runtime::ASM::bl(OSReport);
/*80356738 00353538*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*8035673C 0035353C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356740 00353540*/ PPC::Runtime::ASM::bl(OSReport);
/*80356744 00353544*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_WithTabsAndStringFla" 13 @ Get_MemoryOffset_SDA21);
/*80356748 00353548*/ PPC::Runtime::ASM::li(context->r4, lbl_805DB3B4 @ Get_MemoryOffset_SDA21);
/*8035674C 0035354C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356750 00353550*/ PPC::Runtime::ASM::bl(OSReport);
/*80356754 00353554*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB348 @ Get_MemoryOffset_SDA21);
/*80356758 00353558*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8035675C 0035355C*/ PPC::Runtime::ASM::bl(OSReport);
/*80356760 00353560*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB360 @ Get_MemoryOffset_SDA21);
/*80356764 00353564*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80356768 00353568*/ PPC::Runtime::ASM::bl(OSReport);
/*8035676C 0035356C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80356770 00353570*/ PPC::Runtime::ASM::mr(context->r29, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_80356774, 0x80356774) //this is a jump label
/*80356774 00353574*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84c, context->r29));
/*80356778 00353578*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB364 @ Get_MemoryOffset_SDA21);
/* 8035677C 0035357C  4C C6 32 42 */ crset context->cr1eq
/*80356780 00353580*/ PPC::Runtime::ASM::bl(OSReport);
/*80356784 00353584*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80356788 00353588*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*8035678C 0035358C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x7);
/*80356790 00353590*/ PPC::Runtime::ASM::blt(.L_80356774);
/*80356794 00353594*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 7 @ Get_MemoryOffset_SDA21);
/*80356798 00353598*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8035679C 0035359C*/ PPC::Runtime::ASM::bl(OSReport);
/*803567A0 003535A0*/ PPC::Runtime::ASM::li(context->r3, String_ "FormaterStr_CurlRigh" 8 @ Get_MemoryOffset_SDA21);
/*803567A4 003535A4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803567A8 003535A8*/ PPC::Runtime::ASM::bl(OSReport);
/*803567AC 003535AC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*803567B0 003535B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803567B4 003535B4*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803567B8 003535B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803567BC 003535BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803567C0 003535C0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803567C4 003535C4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803567C8 003535C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803567CC 003535CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803567D0 003535D0*/ PPC::Runtime::ASM::blr();
}