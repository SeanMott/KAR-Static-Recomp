//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGet_80536EDC_Ptr.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_8005FB64.hpp"
#include "fn_8005FAE4.hpp"
#include "fn_8005FB64.hpp"
#include "fn_8005FAE4.hpp"
#include "fn_8005FB64.hpp"
#include "fn_8005FAE4.hpp"



void fn_800183A4(PPC::Runtime::GCContext* context)
{
/*800183A4 000151A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800183A8 000151A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800183AC 000151AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800183B0 000151B0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800183B4 000151B4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800183B8 000151B8*/ PPC::Runtime::ASM::bl(fn_gmGet_80536EDC_Ptr);
/*800183BC 000151BC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800183C0 000151C0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*800183C4 000151C4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800183C8 000151C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800183CC 000151CC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE83C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800183D0 000151D0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*800183D4 000151D4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*800183D8 000151D8*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f3);
/*800183DC 000151DC*/ PPC::Runtime::ASM::bne(.L_800183F4);
/*800183E0 000151E0*/ PPC::Runtime::ASM::li(context->r3, 0xb2);
/*800183E4 000151E4*/ PPC::Runtime::ASM::bl(fn_8005FB64);
/*800183E8 000151E8*/ PPC::Runtime::ASM::li(context->r3, 0xb2);
/*800183EC 000151EC*/ PPC::Runtime::ASM::bl(fn_8005FAE4);
/*800183F0 000151F0*/ PPC::Runtime::ASM::b(.L_8001849C);
RUNTIME_PPC_JUMP_LABEL(.L_800183F4, 0x800183F4) //this is a jump label
/*800183F4 000151F4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*800183F8 000151F8*/ PPC::Runtime::ASM::ble(.L_8001844C);
/*800183FC 000151FC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DE850 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80018400 00015200*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805DE848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80018404 00015204*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DE840 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80018408 00015208*/ PPC::Runtime::ASM::fmadd(context->f0, context->f1, context->f3, context->f0);
/*8001840C 0001520C*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f0);
/*80018410 00015210*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80018414 00015214*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80018418 00015218*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8001841C 0001521C*/ PPC::Runtime::ASM::bl(fn_8005FB64);
/*80018420 00015220*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DE858 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80018424 00015224*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*80018428 00015228*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805DE848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8001842C 0001522C*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805DE840 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80018430 00015230*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f2, context->f1, context->f0);
/*80018434 00015234*/ PPC::Runtime::ASM::fmul(context->f0, context->f3, context->f0);
/*80018438 00015238*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8001843C 0001523C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80018440 00015240*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80018444 00015244*/ PPC::Runtime::ASM::bl(fn_8005FAE4);
/*80018448 00015248*/ PPC::Runtime::ASM::b(.L_8001849C);
RUNTIME_PPC_JUMP_LABEL(.L_8001844C, 0x8001844C) //this is a jump label
/*8001844C 0001524C*/ PPC::Runtime::ASM::bge(.L_8001849C);
/*80018450 00015250*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805DE858 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80018454 00015254*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805DE848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80018458 00015258*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DE840 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8001845C 0001525C*/ PPC::Runtime::ASM::fmadd(context->f0, context->f1, context->f3, context->f0);
/*80018460 00015260*/ PPC::Runtime::ASM::fmul(context->f0, context->f2, context->f0);
/*80018464 00015264*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80018468 00015268*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8001846C 0001526C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80018470 00015270*/ PPC::Runtime::ASM::bl(fn_8005FB64);
/*80018474 00015274*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DE850 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80018478 00015278*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r31));
/*8001847C 0001527C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805DE848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80018480 00015280*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805DE840 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80018484 00015284*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f2, context->f1, context->f0);
/*80018488 00015288*/ PPC::Runtime::ASM::fmul(context->f0, context->f3, context->f0);
/*8001848C 0001528C*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*80018490 00015290*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80018494 00015294*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80018498 00015298*/ PPC::Runtime::ASM::bl(fn_8005FAE4);
RUNTIME_PPC_JUMP_LABEL(.L_8001849C, 0x8001849C) //this is a jump label
/*8001849C 0001529C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*800184A0 000152A0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*800184A4 000152A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*800184A8 000152A8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x41, context->r31));
/*800184AC 000152AC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*800184B0 000152B0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r31));
/*800184B4 000152B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r30));
/*800184B8 000152B8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x43, context->r31));
/*800184BC 000152BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800184C0 000152C0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800184C4 000152C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800184C8 000152C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800184CC 000152CC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800184D0 000152D0*/ PPC::Runtime::ASM::blr();
}