//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80312F6C.hpp"



void fn_8037C878(PPC::Runtime::GCContext* context)
{
/*8037C878 00379678*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8037C87C 0037967C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037C880 00379680*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037C884 00379684*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037C888 00379688*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8037C88C 0037968C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35c, context->r3));
/*8037C890 00379690*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8037C894 00379694*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r12));
/*8037C898 00379698*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037C89C 0037969C*/ PPC::Runtime::ASM::bctrl();
/*8037C8A0 003796A0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xb);
/*8037C8A4 003796A4*/ PPC::Runtime::ASM::bgt(.L_8037C92C);
/*8037C8A8 003796A8*/ PPC::Runtime::ASM::lis(context->r4, jumptable_804F3220 @ Get_MemoryOffset_HighBit);
/*8037C8AC 003796AC*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*8037C8B0 003796B0*/ PPC::Runtime::ASM::addi(context->r3, context->r4, jumptable_804F3220 @ Get_MemoryOffset_LowBit);
/*8037C8B4 003796B4*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8037C8B8 003796B8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8037C8BC 003796BC*/ PPC::Runtime::ASM::bctr();
/*8037C8C0 003796C0*/ PPC::Runtime::ASM::li(context->r0, 0x2710);
/*8037C8C4 003796C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037C8C8 003796C8*/ PPC::Runtime::ASM::b(.L_8037C934);
/*8037C8CC 003796CC*/ PPC::Runtime::ASM::li(context->r0, 0x2711);
/*8037C8D0 003796D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037C8D4 003796D4*/ PPC::Runtime::ASM::b(.L_8037C934);
/*8037C8D8 003796D8*/ PPC::Runtime::ASM::li(context->r0, 0x2714);
/*8037C8DC 003796DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037C8E0 003796E0*/ PPC::Runtime::ASM::b(.L_8037C934);
/*8037C8E4 003796E4*/ PPC::Runtime::ASM::li(context->r0, 0x2840);
/*8037C8E8 003796E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037C8EC 003796EC*/ PPC::Runtime::ASM::b(.L_8037C934);
/*8037C8F0 003796F0*/ PPC::Runtime::ASM::li(context->r0, 0x7531);
/*8037C8F4 003796F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037C8F8 003796F8*/ PPC::Runtime::ASM::b(.L_8037C934);
/*8037C8FC 003796FC*/ PPC::Runtime::ASM::li(context->r0, 0x2908);
/*8037C900 00379700*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037C904 00379704*/ PPC::Runtime::ASM::b(.L_8037C934);
/*8037C908 00379708*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037C90C 0037970C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037C910 00379710*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBCB8 @ Get_MemoryOffset_SDA21);
/*8037C914 00379714*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBCB0 @ Get_MemoryOffset_SDA21);
/*8037C918 00379718*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8037C91C 0037971C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8037C920 00379720*/ PPC::Runtime::ASM::bl(fn_80312F6C);
/*8037C924 00379724*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037C928 00379728*/ PPC::Runtime::ASM::b(.L_8037C934);
RUNTIME_PPC_JUMP_LABEL(.L_8037C92C, 0x8037C92C) //this is a jump label
/*8037C92C 0037972C*/ PPC::Runtime::ASM::li(context->r0, 0x7531);
/*8037C930 00379730*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8037C934, 0x8037C934) //this is a jump label
/*8037C934 00379734*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037C938 00379738*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037C93C 0037973C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037C940 00379740*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8037C944 00379744*/ PPC::Runtime::ASM::blr();
}