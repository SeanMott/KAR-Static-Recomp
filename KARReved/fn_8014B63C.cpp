//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_8014B524.hpp"
#include "fn_8014B524.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_8014AAEC.hpp"



void fn_8014B63C(PPC::Runtime::GCContext* context)
{
/*8014B63C 0014843C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8014B640 00148440*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014B644 00148444*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8014B648 00148448*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8014B64C 0014844C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8014B650 00148450*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014B654 00148454*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8014B658 00148458*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8014B65C 0014845C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014B660 00148460*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x3bc);
/*8014B664 00148464*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3bc, context->r3));
/*8014B668 00148468*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8014B66C 0014846C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8014B670 00148470*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*8014B674 00148474*/ PPC::Runtime::ASM::lis(context->r4, fn_8014B524 @ Get_MemoryOffset_HighBit);
/*8014B678 00148478*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8014B67C 0014847C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8014B680 00148480*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8014B684 00148484*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8014B524 @ Get_MemoryOffset_LowBit);
/*8014B688 00148488*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8014B68C 0014848C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E05A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8014B690 00148490*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8014B694 00148494*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8014B698 00148498*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8014B69C 0014849C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8014B6A0 001484A0*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8014B6A4 001484A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8014B6A8 001484A8*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8014B6AC 001484AC*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8014B6B0 001484B0*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8014B6B4 001484B4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8014B6B8 001484B8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8014B6BC 001484BC*/ PPC::Runtime::ASM::bl(fn_8014AAEC);
/*8014B6C0 001484C0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8014B6C4 001484C4*/ PPC::Runtime::ASM::bne(.L_8014B6D8);
/*8014B6C8 001484C8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D66E8 @ Get_MemoryOffset_SDA21);
/*8014B6CC 001484CC*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8014B6D0 001484D0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D66F0 @ Get_MemoryOffset_SDA21);
/*8014B6D4 001484D4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8014B6D8, 0x8014B6D8) //this is a jump label
/*8014B6D8 001484D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8014B6DC 001484DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014B6E0 001484E0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*8014B6E4 001484E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*8014B6E8 001484E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014B6EC 001484EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*8014B6F0 001484F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*8014B6F4 001484F4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8014B6F8 001484F8*/ PPC::Runtime::ASM::bne(.L_8014B744);
/*8014B6FC 001484FC*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8014B700 00148500*/ PPC::Runtime::ASM::beq(.L_8014B744);
/*8014B704 00148504*/ PPC::Runtime::ASM::bne(.L_8014B718);
/*8014B708 00148508*/ PPC::Runtime::ASM::li(context->r3, lbl_805D66E8 @ Get_MemoryOffset_SDA21);
/*8014B70C 0014850C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8014B710 00148510*/ PPC::Runtime::ASM::li(context->r5, lbl_805D66F0 @ Get_MemoryOffset_SDA21);
/*8014B714 00148514*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8014B718, 0x8014B718) //this is a jump label
/*8014B718 00148518*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*8014B71C 0014851C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8014B720 00148520*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8014B724 00148524*/ PPC::Runtime::ASM::bne(.L_8014B734);
/*8014B728 00148528*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8014B72C 0014852C*/ PPC::Runtime::ASM::beq(.L_8014B734);
/*8014B730 00148530*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8014B734, 0x8014B734) //this is a jump label
/*8014B734 00148534*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8014B738 00148538*/ PPC::Runtime::ASM::bne(.L_8014B744);
/*8014B73C 0014853C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8014B740 00148540*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8014B744, 0x8014B744) //this is a jump label
/*8014B744 00148544*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8014B748 00148548*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8014B74C 0014854C*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8014B750 00148550*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8014B754 00148554*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8014B758 00148558*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8014B75C 0014855C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014B760 00148560*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8014B764 00148564*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8014B768 00148568*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014B76C 0014856C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8014B770 00148570*/ PPC::Runtime::ASM::blr();
}