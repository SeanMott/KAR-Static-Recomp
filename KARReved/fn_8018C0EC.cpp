//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018C1C8.hpp"
#include "fn_8018C3B4.hpp"



void fn_8018C0EC(PPC::Runtime::GCContext* context)
{
/*8018C0EC 00188EEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8018C0F0 00188EF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8018C0F4 00188EF4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80559AC0 @ Get_MemoryOffset_HighBit);
/*8018C0F8 00188EF8*/ PPC::Runtime::ASM::li(context->r4, 0xa0);
/*8018C0FC 00188EFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8018C100 00188F00*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8018C104 00188F04*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8018C108 00188F08*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80559AC0 @ Get_MemoryOffset_LowBit);
/*8018C10C 00188F0C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8018C110 00188F10*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8018C114 00188F14*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*8018C118 00188F18*/ PPC::Runtime::ASM::li(context->r4, 0x190);
/*8018C11C 00188F1C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8018C120 00188F20*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8018C124 00188F24*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x58);
/*8018C128 00188F28*/ PPC::Runtime::ASM::li(context->r4, 0x320);
/*8018C12C 00188F2C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8018C130 00188F30*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8018C134 00188F34*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x84);
/*8018C138 00188F38*/ PPC::Runtime::ASM::li(context->r4, 0x640);
/*8018C13C 00188F3C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8018C140 00188F40*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8018C144 00188F44*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xb0);
/*8018C148 00188F48*/ PPC::Runtime::ASM::li(context->r4, 0x44);
/*8018C14C 00188F4C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8018C150 00188F50*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8018C154 00188F54*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xdc);
/*8018C158 00188F58*/ PPC::Runtime::ASM::li(context->r4, 0x88);
/*8018C15C 00188F5C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8018C160 00188F60*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8018C164 00188F64*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x108);
/*8018C168 00188F68*/ PPC::Runtime::ASM::li(context->r4, 0x18);
/*8018C16C 00188F6C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8018C170 00188F70*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8018C174 00188F74*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8018C178 00188F78*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8018C17C 00188F7C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8018C180 00188F80*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8018C184 00188F84*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8018C188 00188F88*/ PPC::Runtime::ASM::bl(fn_8018C1C8);
/*8018C18C 00188F8C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1040 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018C190 00188F90*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8018C194 00188F94*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD808 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018C198 00188F98*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8018C19C 00188F9C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1044 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018C1A0 00188FA0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8018C1A4 00188FA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8018C1A8 00188FA8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8018C1AC 00188FAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8018C1B0 00188FB0*/ PPC::Runtime::ASM::bl(fn_8018C3B4);
/*8018C1B4 00188FB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8018C1B8 00188FB8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8018C1BC 00188FBC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8018C1C0 00188FC0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8018C1C4 00188FC4*/ PPC::Runtime::ASM::blr();
}