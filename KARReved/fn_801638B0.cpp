//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8013639C.hpp"



void fn_801638B0(PPC::Runtime::GCContext* context)
{
/*801638B0 001606B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801638B4 001606B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801638B8 001606B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801638BC 001606BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801638C0 001606C0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801638C4 001606C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801638C8 001606C8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*801638CC 001606CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*801638D0 001606D0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801638D4 001606D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*801638D8 001606D8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*801638DC 001606DC*/ PPC::Runtime::ASM::bl(fn_8013639C);
/*801638E0 001606E0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801638E4 001606E4*/ PPC::Runtime::ASM::bne(.L_801638F8);
/*801638E8 001606E8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6A50 @ Get_MemoryOffset_SDA21);
/*801638EC 001606EC*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*801638F0 001606F0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6A58 @ Get_MemoryOffset_SDA21);
/*801638F4 001606F4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801638F8, 0x801638F8) //this is a jump label
/*801638F8 001606F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801638FC 001606FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80163900 00160700*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80163904 00160704*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80163908 00160708*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016390C 0016070C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80163910 00160710*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80163914 00160714*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80163918 00160718*/ PPC::Runtime::ASM::bne(.L_80163964);
/*8016391C 0016071C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80163920 00160720*/ PPC::Runtime::ASM::beq(.L_80163964);
/*80163924 00160724*/ PPC::Runtime::ASM::bne(.L_80163938);
/*80163928 00160728*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6A50 @ Get_MemoryOffset_SDA21);
/*8016392C 0016072C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80163930 00160730*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6A58 @ Get_MemoryOffset_SDA21);
/*80163934 00160734*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80163938, 0x80163938) //this is a jump label
/*80163938 00160738*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8016393C 0016073C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80163940 00160740*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80163944 00160744*/ PPC::Runtime::ASM::bne(.L_80163954);
/*80163948 00160748*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8016394C 0016074C*/ PPC::Runtime::ASM::beq(.L_80163954);
/*80163950 00160750*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80163954, 0x80163954) //this is a jump label
/*80163954 00160754*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80163958 00160758*/ PPC::Runtime::ASM::bne(.L_80163964);
/*8016395C 0016075C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80163960 00160760*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80163964, 0x80163964) //this is a jump label
/*80163964 00160764*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80163968 00160768*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016396C 0016076C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80163970 00160770*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80163974 00160774*/ PPC::Runtime::ASM::blr();
}