//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80059818.hpp"
#include "fn_80073FA4.hpp"
#include "fn_LoadDatsForCityTrial.hpp"
#include "fn_80059818.hpp"
#include "fn_80059520.hpp"
#include "fn_80139648.hpp"
#include "fn_8013AAF4.hpp"
#include "fn_8014CB60.hpp"
#include "fn_8014CCA0.hpp"
#include "fn_8014D050.hpp"
#include "fn_8014D3A4.hpp"
#include "fn_8014D6CC.hpp"
#include "fn_8014D9A8.hpp"
#include "fn_8014DC80.hpp"
#include "fn_8016180C.hpp"



void fn_80133570(PPC::Runtime::GCContext* context)
{
/*80133570 00130370*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80133574 00130374*/ PPC::Runtime::ASM::mflr(context->r0);
/*80133578 00130378*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*8013357C 0013037C*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1133 @ Get_MemoryOffset_HighBit);
/*80133580 00130380*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80133584 00130384*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80133588 00130388*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8013358C 0013038C*/ PPC::Runtime::ASM::addi(context->r31, context->r4, MemoryOffset_1133 @ Get_MemoryOffset_LowBit);
/*80133590 00130390*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*80133594 00130394*/ PPC::Runtime::ASM::stb(context->r0, lbl_80558788 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*80133598 00130398*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7E0 @ Get_MemoryOffset_SDA21);
/*8013359C 0013039C*/ PPC::Runtime::ASM::bl(fn_80059818);
/*801335A0 001303A0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*801335A4 001303A4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801335A8 001303A8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*801335AC 001303AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r3));
/*801335B0 001303B0*/ PPC::Runtime::ASM::bl(fn_80073FA4);
/*801335B4 001303B4*/ PPC::Runtime::ASM::bl(fn_LoadDatsForCityTrial);
/*801335B8 001303B8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x78);
/*801335BC 001303BC*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DD7C4 @ Get_MemoryOffset_SDA21);
/*801335C0 001303C0*/ PPC::Runtime::ASM::bl(fn_80059818);
/*801335C4 001303C4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD7C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801335C8 001303C8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801335CC 001303CC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x200);
/*801335D0 001303D0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801335D4 001303D4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801335D8 001303D8*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801335DC 001303DC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80558788 @ Get_MemoryOffset_HighBit);
/*801335E0 001303E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801335E4 001303E4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80558788 @ Get_MemoryOffset_LowBit);
/*801335E8 001303E8*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*801335EC 001303EC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80559A90 @ Get_MemoryOffset_HighBit);
/*801335F0 001303F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x400, context->r4));
/*801335F4 001303F4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80559A90 @ Get_MemoryOffset_LowBit);
/*801335F8 001303F8*/ PPC::Runtime::ASM::li(context->r4, 0x1f0);
/*801335FC 001303FC*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*80133600 00130400*/ PPC::Runtime::ASM::bl(fn_80139648);
/*80133604 00130404*/ PPC::Runtime::ASM::bl(fn_8013AAF4);
/*80133608 00130408*/ PPC::Runtime::ASM::bl(fn_8014CB60);
/*8013360C 0013040C*/ PPC::Runtime::ASM::bl(fn_8014CCA0);
/*80133610 00130410*/ PPC::Runtime::ASM::bl(fn_8014D050);
/*80133614 00130414*/ PPC::Runtime::ASM::bl(fn_8014D3A4);
/*80133618 00130418*/ PPC::Runtime::ASM::bl(fn_8014D6CC);
/*8013361C 0013041C*/ PPC::Runtime::ASM::bl(fn_8014D9A8);
/*80133620 00130420*/ PPC::Runtime::ASM::bl(fn_8014DC80);
/*80133624 00130424*/ PPC::Runtime::ASM::bl(fn_8016180C);
/*80133628 00130428*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8013362C 0013042C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80133630 00130430*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80133634 00130434*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80133638 00130438*/ PPC::Runtime::ASM::blr();
}