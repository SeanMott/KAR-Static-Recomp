//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_strcmpi.hpp"



void fn_strcmpi(PPC::Runtime::GCContext* context)
{
/*803BD5A4 003BA3A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803BD5A8 003BA3A8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*803BD5AC 003BA3AC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*803BD5B0 003BA3B0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*803BD5B4 003BA3B4*/ PPC::Runtime::ASM::bne(.L_803BD5C0);
/*803BD5B8 003BA3B8*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*803BD5BC 003BA3BC*/ PPC::Runtime::ASM::b(.L_803BD5D0);
RUNTIME_PPC_JUMP_LABEL(.L_803BD5C0, 0x803BD5C0) //this is a jump label
/*803BD5C0 003BA3C0*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F8BF0 @ Get_MemoryOffset_HighBit);
/*803BD5C4 003BA3C4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 24);
/*803BD5C8 003BA3C8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804F8BF0 @ Get_MemoryOffset_LowBit);
/*803BD5CC 003BA3CC*/ PPC::Runtime::ASM::lbzx(context->r5, context->r5, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803BD5D0, 0x803BD5D0) //this is a jump label
/*803BD5D0 003BA3D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803BD5D4 003BA3D4*/ PPC::Runtime::ASM::extsb(context->r6, context->r5);
/*803BD5D8 003BA3D8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*803BD5DC 003BA3DC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*803BD5E0 003BA3E0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*803BD5E4 003BA3E4*/ PPC::Runtime::ASM::bne(.L_803BD5F0);
/*803BD5E8 003BA3E8*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803BD5EC 003BA3EC*/ PPC::Runtime::ASM::b(.L_803BD600);
RUNTIME_PPC_JUMP_LABEL(.L_803BD5F0, 0x803BD5F0) //this is a jump label
/*803BD5F0 003BA3F0*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F8BF0 @ Get_MemoryOffset_HighBit);
/*803BD5F4 003BA3F4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 24);
/*803BD5F8 003BA3F8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804F8BF0 @ Get_MemoryOffset_LowBit);
/*803BD5FC 003BA3FC*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_803BD600, 0x803BD600) //this is a jump label
/*803BD600 003BA400*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*803BD604 003BA404*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*803BD608 003BA408*/ PPC::Runtime::ASM::bge(.L_803BD614);
/*803BD60C 003BA40C*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*803BD610 003BA410*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803BD614, 0x803BD614) //this is a jump label
/*803BD614 003BA414*/ PPC::Runtime::ASM::ble(.L_803BD620);
/*803BD618 003BA418*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803BD61C 003BA41C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803BD620, 0x803BD620) //this is a jump label
/*803BD620 003BA420*/ PPC::Runtime::ASM::extsb.(context->r0, context->r6);
/*803BD624 003BA424*/ PPC::Runtime::ASM::bne(fn_strcmpi);
/*803BD628 003BA428*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803BD62C 003BA42C*/ PPC::Runtime::ASM::blr();
}