//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSReport.hpp"
#include "OSReport.hpp"
#include "fn_OSGetPhysicalMemSize.hpp"
#include "OSReport.hpp"



void fn_8043A778(PPC::Runtime::GCContext* context)
{
/*8043A778 00437578*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8043A77C 0043757C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8043A780 00437580*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8043A784 00437584*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8043A788 00437588*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8043A78C 0043758C*/ PPC::Runtime::ASM::lis(context->r5, lbl_80507308 @ Get_MemoryOffset_HighBit);
/*8043A790 00437590*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8043A794 00437594*/ PPC::Runtime::ASM::addi(context->r30, context->r5, lbl_80507308 @ Get_MemoryOffset_LowBit);
/*8043A798 00437598*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8043A79C 0043759C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8cc);
/*8043A7A0 004375A0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8043A7A4 004375A4*/ PPC::Runtime::ASM::bl(OSReport);
/*8043A7A8 004375A8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x904);
/*8043A7AC 004375AC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8043A7B0 004375B0*/ PPC::Runtime::ASM::bl(OSReport);
/*8043A7B4 004375B4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8043A7B8 004375B8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8043A7BC 004375BC*/ PPC::Runtime::ASM::lis(context->r31, 0x8000);
/*8043A7C0 004375C0*/ PPC::Runtime::ASM::b(.L_8043A81C);
RUNTIME_PPC_JUMP_LABEL(.L_8043A7C4, 0x8043A7C4) //this is a jump label
/*8043A7C4 004375C4*/ PPC::Runtime::ASM::cmplw(context->r28, context->r31);
/*8043A7C8 004375C8*/ PPC::Runtime::ASM::blt(.L_8043A838);
/*8043A7CC 004375CC*/ PPC::Runtime::ASM::bl(fn_OSGetPhysicalMemSize);
/*8043A7D0 004375D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8043A7D4 004375D4*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*8043A7D8 004375D8*/ PPC::Runtime::ASM::addc(context->r5, context->r3, context->r4);
/*8043A7DC 004375DC*/ PPC::Runtime::ASM::adde(context->r0, context->r4, context->r0);
/*8043A7E0 004375E0*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*8043A7E4 004375E4*/ PPC::Runtime::ASM::xoris(context->r3, context->r0, 0x8000);
/*8043A7E8 004375E8*/ PPC::Runtime::ASM::subfc(context->r0, context->r5, context->r28);
/*8043A7EC 004375EC*/ PPC::Runtime::ASM::subfe(context->r3, context->r3, context->r4);
/*8043A7F0 004375F0*/ PPC::Runtime::ASM::subfe(context->r3, context->r4, context->r4);
/*8043A7F4 004375F4*/ PPC::Runtime::ASM::neg.(context->r3, context->r3);
/*8043A7F8 004375F8*/ PPC::Runtime::ASM::beq(.L_8043A838);
/*8043A7FC 004375FC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8043A800 00437600*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*8043A804 00437604*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8043A808 00437608*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x924);
/*8043A80C 0043760C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8043A810 00437610*/ PPC::Runtime::ASM::bl(OSReport);
/*8043A814 00437614*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8043A818 00437618*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8043A81C, 0x8043A81C) //this is a jump label
/*8043A81C 0043761C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8043A820 00437620*/ PPC::Runtime::ASM::beq(.L_8043A838);
/*8043A824 00437624*/ PPC::Runtime::ASM::addis(context->r0, context->r28, 0x1);
/*8043A828 00437628*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8043A82C 0043762C*/ PPC::Runtime::ASM::beq(.L_8043A838);
/*8043A830 00437630*/ PPC::Runtime::ASM::cmplw(context->r29, context->r27);
/*8043A834 00437634*/ PPC::Runtime::ASM::blt(.L_8043A7C4);
RUNTIME_PPC_JUMP_LABEL(.L_8043A838, 0x8043A838) //this is a jump label
/*8043A838 00437638*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8043A83C 0043763C*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8043A840 00437640*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8043A844 00437644*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8043A848 00437648*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8043A84C 0043764C*/ PPC::Runtime::ASM::blr();
}