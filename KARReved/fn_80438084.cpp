//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn__HSD_MemAlloc.hpp"
#include "memset.hpp"



void fn_80438084(PPC::Runtime::GCContext* context)
{
/*80438084 00434E84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80438088 00434E88*/ PPC::Runtime::ASM::mflr(context->r0);
/*8043808C 00434E8C*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058CCE8 @ Get_MemoryOffset_HighBit);
/*80438090 00434E90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80438094 00434E94*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_18058CCE8 @ Get_MemoryOffset_LowBit);
/*80438098 00434E98*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*8043809C 00434E9C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804380A0 00434EA0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, 0x0);
/*804380A4 00434EA4*/ PPC::Runtime::ASM::addi(context->r6, context->r4, 0x80);
/*804380A8 00434EA8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x100);
/*804380AC 00434EAC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804380B0 00434EB0*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_804380B4, 0x804380B4) //this is a jump label
/*804380B4 00434EB4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804380B8 00434EB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*804380BC 00434EBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*804380C0 00434EC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*804380C4 00434EC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*804380C8 00434EC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*804380CC 00434ECC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*804380D0 00434ED0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*804380D4 00434ED4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*804380D8 00434ED8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*804380DC 00434EDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*804380E0 00434EE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*804380E4 00434EE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*804380E8 00434EE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*804380EC 00434EEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*804380F0 00434EF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*804380F4 00434EF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/*804380F8 00434EF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r6));
/*804380FC 00434EFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80438100 00434F00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*80438104 00434F04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*80438108 00434F08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*8043810C 00434F0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*80438110 00434F10*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x20);
/*80438114 00434F14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*80438118 00434F18*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x20);
/*8043811C 00434F1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*80438120 00434F20*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x20);
/*80438124 00434F24*/ PPC::Runtime::ASM::bdnz(.L_804380B4);
/*80438128 00434F28*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE3E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043812C 00434F2C*/ PPC::Runtime::ASM::subi(context->r30, context->r3, 0x1);
/*80438130 00434F30*/ PPC::Runtime::ASM::b(.L_8043816C);
RUNTIME_PPC_JUMP_LABEL(.L_80438134, 0x80438134) //this is a jump label
/*80438134 00434F34*/ PPC::Runtime::ASM::li(context->r3, 0xb0);
/*80438138 00434F38*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*8043813C 00434F3C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80438140 00434F40*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80438144 00434F44*/ PPC::Runtime::ASM::li(context->r5, 0xb0);
/*80438148 00434F48*/ PPC::Runtime::ASM::bl(memset);
/*8043814C 00434F4C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80438150 00434F50*/ PPC::Runtime::ASM::bne(.L_8043815C);
/*80438154 00434F54*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*80438158 00434F58*/ PPC::Runtime::ASM::b(.L_80438178);
RUNTIME_PPC_JUMP_LABEL(.L_8043815C, 0x8043815C) //this is a jump label
/*8043815C 00434F5C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE3E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80438160 00434F60*/ PPC::Runtime::ASM::subi(context->r30, context->r30, 0x1);
/*80438164 00434F64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80438168 00434F68*/ PPC::Runtime::ASM::stw(context->r31, STRUCT_BYTE4_COUNT_1805DE3E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8043816C, 0x8043816C) //this is a jump label
/*8043816C 00434F6C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*80438170 00434F70*/ PPC::Runtime::ASM::bge(.L_80438134);
/*80438174 00434F74*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_80438178, 0x80438178) //this is a jump label
/*80438178 00434F78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8043817C 00434F7C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80438180 00434F80*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80438184 00434F84*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80438188 00434F88*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8043818C 00434F8C*/ PPC::Runtime::ASM::blr();
}