//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006FAEC.hpp"
#include "fn_8006FC24.hpp"
#include "fn_8006FBF0.hpp"
#include "fn_8006FC70.hpp"
#include "fn_8006FD70.hpp"
#include "fn_8006FFF0.hpp"
#include "fn_8006FEF4.hpp"
#include "fn_80070100.hpp"
#include "fn_8006FAEC.hpp"
#include "fn_8006FC24.hpp"
#include "fn_8006FBF0.hpp"
#include "fn_8006FC70.hpp"
#include "fn_8006FD70.hpp"
#include "fn_8006FFF0.hpp"
#include "fn_8006FEF4.hpp"
#include "fn_80070100.hpp"



void fn_8006E5A4(PPC::Runtime::GCContext* context)
{
/*8006E5A4 0006B3A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8006E5A8 0006B3A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8006E5AC 0006B3AC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80550E28 @ Get_MemoryOffset_HighBit);
/*8006E5B0 0006B3B0*/ PPC::Runtime::ASM::li(context->r4, 0x5c);
/*8006E5B4 0006B3B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006E5B8 0006B3B8*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8006E5BC 0006B3BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8006E5C0 0006B3C0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80550E28 @ Get_MemoryOffset_LowBit);
/*8006E5C4 0006B3C4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*8006E5C8 0006B3C8*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8006E5CC 0006B3CC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8006E5D0 0006B3D0*/ PPC::Runtime::ASM::li(context->r4, 0x50);
/*8006E5D4 0006B3D4*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8006E5D8 0006B3D8*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8006E5DC 0006B3DC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x58);
/*8006E5E0 0006B3E0*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8006E5E4 0006B3E4*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8006E5E8 0006B3E8*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*8006E5EC 0006B3EC*/ PPC::Runtime::ASM::lis(context->r10, fn_8006FAEC @ Get_MemoryOffset_HighBit);
/*8006E5F0 0006B3F0*/ PPC::Runtime::ASM::lis(context->r9, fn_8006FC24 @ Get_MemoryOffset_HighBit);
/*8006E5F4 0006B3F4*/ PPC::Runtime::ASM::lis(context->r8, fn_8006FBF0 @ Get_MemoryOffset_HighBit);
/*8006E5F8 0006B3F8*/ PPC::Runtime::ASM::lis(context->r7, fn_8006FC70 @ Get_MemoryOffset_HighBit);
/*8006E5FC 0006B3FC*/ PPC::Runtime::ASM::lis(context->r6, fn_8006FD70 @ Get_MemoryOffset_HighBit);
/*8006E600 0006B400*/ PPC::Runtime::ASM::lis(context->r5, fn_8006FFF0 @ Get_MemoryOffset_HighBit);
/*8006E604 0006B404*/ PPC::Runtime::ASM::lis(context->r4, fn_8006FEF4 @ Get_MemoryOffset_HighBit);
/*8006E608 0006B408*/ PPC::Runtime::ASM::lis(context->r3, fn_80070100 @ Get_MemoryOffset_HighBit);
/*8006E60C 0006B40C*/ PPC::Runtime::ASM::addi(context->r11, context->r10, fn_8006FAEC @ Get_MemoryOffset_LowBit);
/*8006E610 0006B410*/ PPC::Runtime::ASM::addi(context->r10, context->r9, fn_8006FC24 @ Get_MemoryOffset_LowBit);
/*8006E614 0006B414*/ PPC::Runtime::ASM::addi(context->r9, context->r31, 0x84);
/*8006E618 0006B418*/ PPC::Runtime::ASM::addi(context->r8, context->r8, fn_8006FBF0 @ Get_MemoryOffset_LowBit);
/*8006E61C 0006B41C*/ PPC::Runtime::ASM::addi(context->r7, context->r7, fn_8006FC70 @ Get_MemoryOffset_LowBit);
/*8006E620 0006B420*/ PPC::Runtime::ASM::addi(context->r6, context->r6, fn_8006FD70 @ Get_MemoryOffset_LowBit);
/*8006E624 0006B424*/ PPC::Runtime::ASM::addi(context->r5, context->r5, fn_8006FFF0 @ Get_MemoryOffset_LowBit);
/*8006E628 0006B428*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8006FEF4 @ Get_MemoryOffset_LowBit);
/*8006E62C 0006B42C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80070100 @ Get_MemoryOffset_LowBit);
/*8006E630 0006B430*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*8006E634 0006B434*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r9));
/*8006E638 0006B438*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r9));
/*8006E63C 0006B43C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r9));
/*8006E640 0006B440*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r9));
/*8006E644 0006B444*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r9));
/*8006E648 0006B448*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r9));
/*8006E64C 0006B44C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r9));
/*8006E650 0006B450*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8006E654 0006B454*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006E658 0006B458*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8006E65C 0006B45C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8006E660 0006B460*/ PPC::Runtime::ASM::blr();
}