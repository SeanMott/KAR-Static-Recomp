//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80334A8C.hpp"



void fn_803349C0(PPC::Runtime::GCContext* context)
{
/*803349C0 003317C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803349C4 003317C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803349C8 003317C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803349CC 003317CC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803349D0 003317D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803349D4 003317D4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803349D8 003317D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803349DC 003317DC*/ PPC::Runtime::ASM::li(context->r3, 0x3a88);
/*803349E0 003317E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803349E4 003317E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803349E8 003317E8*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 803349EC 003317EC  7C 64 1B 79 */ mr. context->r4 , context->r3
/*803349F0 003317F0*/ PPC::Runtime::ASM::beq(.L_803349FC);
/*803349F4 003317F4*/ PPC::Runtime::ASM::bl(fn_80334A8C);
/*803349F8 003317F8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803349FC, 0x803349FC) //this is a jump label
/*803349FC 003317FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80334A00 00331800*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80334A04 00331804*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80334A08 00331808*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*80334A0C 0033180C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80334A10 00331810*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80334A14 00331814*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80334A18 00331818*/ PPC::Runtime::ASM::beq(.L_80334A34);
/*80334A1C 0033181C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80334A20 00331820*/ PPC::Runtime::ASM::beq(.L_80334A2C);
/*80334A24 00331824*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD94C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80334A28 00331828*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80334A2C, 0x80334A2C) //this is a jump label
/*80334A2C 0033182C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80334A30 00331830*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80334A34, 0x80334A34) //this is a jump label
/*80334A34 00331834*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80334A38 00331838*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80334A3C 0033183C*/ PPC::Runtime::ASM::beq(.L_80334A4C);
/*80334A40 00331840*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80334A44 00331844*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD94C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80334A48 00331848*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80334A4C, 0x80334A4C) //this is a jump label
/*80334A4C 0033184C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80334A50 00331850*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80334A54 00331854*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80334A58 00331858*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80334A5C 0033185C*/ PPC::Runtime::ASM::b(.L_80334A68);
/*80334A60 00331860*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD94C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80334A64 00331864*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80334A68, 0x80334A68) //this is a jump label
/*80334A68 00331868*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc);
/*80334A6C 0033186C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80334A70 00331870*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80334A74 00331874*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80334A78 00331878*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80334A7C 0033187C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80334A80 00331880*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80334A84 00331884*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80334A88 00331888*/ PPC::Runtime::ASM::blr();
}