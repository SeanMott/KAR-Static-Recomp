//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_8007B44C.hpp"



void fn_80281DD4(PPC::Runtime::GCContext* context)
{
/*80281DD4 0027EBD4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80281DD8 0027EBD8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80281DDC 0027EBDC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80281DE0 0027EBE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80281DE4 0027EBE4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*80281DE8 0027EBE8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80281DEC 0027EBEC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80281DF0 0027EBF0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80281DF4 0027EBF4*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055F480 @ Get_MemoryOffset_HighBit);
/*80281DF8 0027EBF8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055F480 @ Get_MemoryOffset_LowBit);
/*80281DFC 0027EBFC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80281E00 0027EC00*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*80281E04 0027EC04*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r3));
/*80281E08 0027EC08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80281E0C 0027EC0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80281E10 0027EC10*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80281E14 0027EC14*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*80281E18 0027EC18*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055F480 @ Get_MemoryOffset_HighBit);
/*80281E1C 0027EC1C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055F480 @ Get_MemoryOffset_LowBit);
/*80281E20 0027EC20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25c, context->r3));
/*80281E24 0027EC24*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80281E28 0027EC28*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80281E2C 0027EC2C*/ PPC::Runtime::ASM::bne(.L_80281E40);
/*80281E30 0027EC30*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7478 @ Get_MemoryOffset_SDA21);
/*80281E34 0027EC34*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80281E38 0027EC38*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7480 @ Get_MemoryOffset_SDA21);
/*80281E3C 0027EC3C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80281E40, 0x80281E40) //this is a jump label
/*80281E40 0027EC40*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80281E44 0027EC44*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80281E48 0027EC48*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*80281E4C 0027EC4C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80281E50 0027EC50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*80281E54 0027EC54*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80281E58 0027EC58*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80281E5C 0027EC5C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80281E60 0027EC60*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80281E64 0027EC64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80281E68 0027EC68*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80281E6C 0027EC6C*/ PPC::Runtime::ASM::fadds(context->f4, context->f2, context->f0);
/*80281E70 0027EC70*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80281E74 0027EC74*/ PPC::Runtime::ASM::lfd(context->f5, STRUCT_DOUBLE_COUNT_1805E32A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80281E78 0027EC78*/ PPC::Runtime::ASM::fadds(context->f3, context->f1, context->f0);
/*80281E7C 0027EC7C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80281E80 0027EC80*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80281E84 0027EC84*/ PPC::Runtime::ASM::fmul(context->f4, context->f5, context->f4);
/*80281E88 0027EC88*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E32B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80281E8C 0027EC8C*/ PPC::Runtime::ASM::fadds(context->f0, context->f2, context->f0);
/*80281E90 0027EC90*/ PPC::Runtime::ASM::fmul(context->f2, context->f5, context->f3);
/*80281E94 0027EC94*/ PPC::Runtime::ASM::fmul(context->f0, context->f5, context->f0);
/*80281E98 0027EC98*/ PPC::Runtime::ASM::frsp(context->f3, context->f4);
/*80281E9C 0027EC9C*/ PPC::Runtime::ASM::frsp(context->f2, context->f2);
/*80281EA0 0027ECA0*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80281EA4 0027ECA4*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80281EA8 0027ECA8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80281EAC 0027ECAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80281EB0 0027ECB0*/ PPC::Runtime::ASM::bl(fn_8007B44C);
/*80281EB4 0027ECB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80281EB8 0027ECB8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80281EBC 0027ECBC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80281EC0 0027ECC0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80281EC4 0027ECC4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80281EC8 0027ECC8*/ PPC::Runtime::ASM::blr();
}