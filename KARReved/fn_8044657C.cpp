//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn___assert.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_80446820.hpp"
#include "fn_80445CF4.hpp"
#include "fn_804461CC.hpp"
#include "fn_804461CC.hpp"
#include "fn_ARQPostRequest.hpp"
#include "fn_80446820.hpp"
#include "fn_80446244.hpp"
#include "fn_80446244.hpp"
#include "fn_ARQPostRequest.hpp"



void fn_8044657C(PPC::Runtime::GCContext* context)
{
/*8044657C 0044337C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80446580 00443380*/ PPC::Runtime::ASM::mflr(context->r0);
/*80446584 00443384*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80446588 00443388*/ PPC::Runtime::ASM::lis(context->r4, lbl_80508BE0 @ Get_MemoryOffset_HighBit);
/*8044658C 0044338C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80446590 00443390*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18058EC80 @ Get_MemoryOffset_HighBit);
/*80446594 00443394*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80446598 00443398*/ PPC::Runtime::ASM::addi(context->r31, context->r3, STRUCT_BYTE4_COUNT_18058EC80 @ Get_MemoryOffset_LowBit);
/*8044659C 0044339C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804465A0 004433A0*/ PPC::Runtime::ASM::addi(context->r30, context->r4, lbl_80508BE0 @ Get_MemoryOffset_LowBit);
/*804465A4 004433A4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804465A8 004433A8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804465AC 004433AC*/ PPC::Runtime::ASM::bne(.L_804465BC);
/*804465B0 004433B0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*804465B4 004433B4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE4A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804465B8 004433B8*/ PPC::Runtime::ASM::b(.L_80446800);
RUNTIME_PPC_JUMP_LABEL(.L_804465BC, 0x804465BC) //this is a jump label
/*804465BC 004433BC*/ PPC::Runtime::ASM::lwz(context->r9, STRUCT_BYTE4_COUNT_1805DE4B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804465C0 004433C0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r9));
/*804465C4 004433C4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x22);
/*804465C8 004433C8*/ PPC::Runtime::ASM::bne(.L_80446720);
/*804465CC 004433CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r9));
/*804465D0 004433D0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x4000);
/*804465D4 004433D4*/ PPC::Runtime::ASM::ble(.L_804465E8);
/*804465D8 004433D8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*804465DC 004433DC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0xc);
/*804465E0 004433E0*/ PPC::Runtime::ASM::li(context->r4, 0x19e);
/*804465E4 004433E4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_804465E8, 0x804465E8) //this is a jump label
/*804465E8 004433E8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE4B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804465EC 004433EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*804465F0 004433F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804465F4 004433F4*/ PPC::Runtime::ASM::bne(.L_80446608);
/*804465F8 004433F8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*804465FC 004433FC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x2c);
/*80446600 00443400*/ PPC::Runtime::ASM::li(context->r4, 0x19f);
/*80446604 00443404*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80446608, 0x80446608) //this is a jump label
/*80446608 00443408*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE4A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044660C 0044340C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80446610 00443410*/ PPC::Runtime::ASM::bne(.L_80446644);
/*80446614 00443414*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DE4B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446618 00443418*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058ED20 @ Get_MemoryOffset_HighBit);
/*8044661C 0044341C*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446620 00443420*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_8058ED20 @ Get_MemoryOffset_LowBit);
/*80446624 00443424*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*80446628 00443428*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 14);
/*8044662C 0044342C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80446630 00443430*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r4);
/*80446634 00443434*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*80446638 00443438*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r6));
/*8044663C 0044343C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80446640 00443440*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80446644, 0x80446644) //this is a jump label
/*80446644 00443444*/ PPC::Runtime::ASM::lwz(context->r28, STRUCT_BYTE4_COUNT_1805DE4B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446648 00443448*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8044664C 0044344C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80446650 00443450*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*80446654 00443454*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80446658 00443458*/ PPC::Runtime::ASM::clrlslwi(context->r5, context->r0, 30, 2);
/*8044665C 0044345C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r5);
/*80446660 00443460*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*80446664 00443464*/ PPC::Runtime::ASM::bne(.L_804466C4);
/*80446668 00443468*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x10);
/*8044666C 0044346C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80446670 00443470*/ PPC::Runtime::ASM::lwzx(context->r0, context->r6, context->r5);
/*80446674 00443474*/ PPC::Runtime::ASM::stwx(context->r3, context->r4, context->r5);
/*80446678 00443478*/ PPC::Runtime::ASM::cmplw(context->r0, context->r28);
/*8044667C 0044347C*/ PPC::Runtime::ASM::bne(.L_804466E0);
/*80446680 00443480*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80446684 00443484*/ PPC::Runtime::ASM::stwx(context->r0, context->r6, context->r5);
/*80446688 00443488*/ PPC::Runtime::ASM::b(.L_804466E0);
/*8044668C 0044348C*/ PPC::Runtime::ASM::b(.L_804466C4);
RUNTIME_PPC_JUMP_LABEL(.L_80446690, 0x80446690) //this is a jump label
/*80446690 00443490*/ PPC::Runtime::ASM::cmplw(context->r0, context->r28);
/*80446694 00443494*/ PPC::Runtime::ASM::bne(.L_804466C0);
/*80446698 00443498*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8044669C 0044349C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x10);
/*804466A0 004434A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804466A4 004434A4*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r5);
/*804466A8 004434A8*/ PPC::Runtime::ASM::cmplw(context->r0, context->r28);
/*804466AC 004434AC*/ PPC::Runtime::ASM::bne(.L_804466B4);
/*804466B0 004434B0*/ PPC::Runtime::ASM::stwx(context->r3, context->r4, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_804466B4, 0x804466B4) //this is a jump label
/*804466B4 004434B4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*804466B8 004434B8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*804466BC 004434BC*/ PPC::Runtime::ASM::b(.L_804466E8);
RUNTIME_PPC_JUMP_LABEL(.L_804466C0, 0x804466C0) //this is a jump label
/*804466C0 004434C0*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_804466C4, 0x804466C4) //this is a jump label
/*804466C4 004434C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804466C8 004434C8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804466CC 004434CC*/ PPC::Runtime::ASM::bne(.L_80446690);
/*804466D0 004434D0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*804466D4 004434D4*/ PPC::Runtime::ASM::li(context->r4, 0x79);
/*804466D8 004434D8*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_347 @ Get_MemoryOffset_SDA21);
/*804466DC 004434DC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_804466E0, 0x804466E0) //this is a jump label
/*804466E0 004434E0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*804466E4 004434E4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_804466E8, 0x804466E8) //this is a jump label
/*804466E8 004434E8*/ PPC::Runtime::ASM::lwz(context->r28, STRUCT_BYTE4_COUNT_1805DE4B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804466EC 004434EC*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*804466F0 004434F0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE4A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804466F4 004434F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*804466F8 004434F8*/ PPC::Runtime::ASM::stw(context->r28, STRUCT_BYTE4_COUNT_1805DE4A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804466FC 004434FC*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80446700 00443500*/ PPC::Runtime::ASM::lbz(context->r0, SkipAddress_18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446704 00443504*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80446708 00443508*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_15 @ Get_MemoryOffset_SDA21);
/*8044670C 0044350C*/ PPC::Runtime::ASM::stb(context->r4, SkipAddress_19 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446710 00443510*/ PPC::Runtime::ASM::stbx(context->r4, context->r3, context->r0);
/*80446714 00443514*/ PPC::Runtime::ASM::bl(fn_80446820);
/*80446718 00443518*/ PPC::Runtime::ASM::bl(fn_80445CF4);
/*8044671C 0044351C*/ PPC::Runtime::ASM::b(.L_80446800);
RUNTIME_PPC_JUMP_LABEL(.L_80446720, 0x80446720) //this is a jump label
/*80446720 00443520*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x23);
/*80446724 00443524*/ PPC::Runtime::ASM::bne(.L_80446800);
/*80446728 00443528*/ PPC::Runtime::ASM::lbz(context->r8, SkipAddress_18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044672C 0044352C*/ PPC::Runtime::ASM::stb(context->r8, SkipAddress_17 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446730 00443530*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r9));
/*80446734 00443534*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x4000);
/*80446738 00443538*/ PPC::Runtime::ASM::ble(.L_804467B8);
/*8044673C 0044353C*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058ED20 @ Get_MemoryOffset_HighBit);
/*80446740 00443540*/ PPC::Runtime::ASM::lis(context->r3, fn_804461CC @ Get_MemoryOffset_HighBit);
/*80446744 00443544*/ PPC::Runtime::ASM::addi(context->r10, context->r3, fn_804461CC @ Get_MemoryOffset_LowBit);
/*80446748 00443548*/ PPC::Runtime::ASM::slwi(context->r6, context->r8, 6);
/*8044674C 0044354C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x20);
/*80446750 00443550*/ PPC::Runtime::ASM::slwi(context->r5, context->r8, 14);
/*80446754 00443554*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_8058ED20 @ Get_MemoryOffset_LowBit);
/*80446758 00443558*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r9));
/*8044675C 0044355C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r6);
/*80446760 00443560*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80446764 00443564*/ PPC::Runtime::ASM::add(context->r7, context->r0, context->r5);
/*80446768 00443568*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8044676C 0044356C*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80446770 00443570*/ PPC::Runtime::ASM::li(context->r9, 0x4000);
/*80446774 00443574*/ PPC::Runtime::ASM::bl(fn_ARQPostRequest);
/*80446778 00443578*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE4B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044677C 0044357C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80446780 00443580*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*80446784 00443584*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4000);
/*80446788 00443588*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8044678C 0044358C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE4B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446790 00443590*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80446794 00443594*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4000);
/*80446798 00443598*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*8044679C 0044359C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE4B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804467A0 004435A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*804467A4 004435A4*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x4000);
/*804467A8 004435A8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*804467AC 004435AC*/ PPC::Runtime::ASM::stb(context->r0, SkipAddress_19 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804467B0 004435B0*/ PPC::Runtime::ASM::bl(fn_80446820);
/*804467B4 004435B4*/ PPC::Runtime::ASM::b(.L_80446800);
RUNTIME_PPC_JUMP_LABEL(.L_804467B8, 0x804467B8) //this is a jump label
/*804467B8 004435B8*/ PPC::Runtime::ASM::slwi(context->r0, context->r8, 2);
/*804467BC 004435BC*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_16 @ Get_MemoryOffset_SDA21);
/*804467C0 004435C0*/ PPC::Runtime::ASM::stwx(context->r9, context->r3, context->r0);
/*804467C4 004435C4*/ PPC::Runtime::ASM::lis(context->r5, lbl_8058ED20 @ Get_MemoryOffset_HighBit);
/*804467C8 004435C8*/ PPC::Runtime::ASM::lis(context->r4, fn_80446244 @ Get_MemoryOffset_HighBit);
/*804467CC 004435CC*/ PPC::Runtime::ASM::slwi(context->r7, context->r8, 6);
/*804467D0 004435D0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x20);
/*804467D4 004435D4*/ PPC::Runtime::ASM::slwi(context->r6, context->r8, 14);
/*804467D8 004435D8*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_8058ED20 @ Get_MemoryOffset_LowBit);
/*804467DC 004435DC*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r9));
/*804467E0 004435E0*/ PPC::Runtime::ASM::addi(context->r10, context->r4, fn_80446244 @ Get_MemoryOffset_LowBit);
/*804467E4 004435E4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r7);
/*804467E8 004435E8*/ PPC::Runtime::ASM::add(context->r7, context->r0, context->r6);
/*804467EC 004435EC*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r9));
/*804467F0 004435F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*804467F4 004435F4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*804467F8 004435F8*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*804467FC 004435FC*/ PPC::Runtime::ASM::bl(fn_ARQPostRequest);
RUNTIME_PPC_JUMP_LABEL(.L_80446800, 0x80446800) //this is a jump label
/*80446800 00443600*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80446804 00443604*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80446808 00443608*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8044680C 0044360C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80446810 00443610*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80446814 00443614*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80446818 00443618*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8044681C 0044361C*/ PPC::Runtime::ASM::blr();
}